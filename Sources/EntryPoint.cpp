#include <iostream>

#include <Core/Core.hpp>

#include <Editor/Editor.hpp>
#include <Application/Application.hpp>

#define USE_EDITOR

int main()
{
#ifdef NDEBUG
    Spark::Logger::SetLogLevel(Spark::ELogLevel::Info);
    Spark::Logger::Info("Build mode: Release");
#else
    Spark::Logger::SetLogLevel(Spark::ELogLevel::Debug);
    Spark::Logger::Info("Build mode: Debug");
#endif


    Spark::Logger::Info("Spark Engine: Initialized");

#ifdef USE_EDITOR
    {
        std::make_unique<Spark::Editor>("Editor")->Run();
    }
#else
    Spark::Logger::Error("Spark Engine: Standalone application not available");
#endif


    Spark::Logger::Info("Spark Engine: Shutdown");
    
    return EXIT_SUCCESS;
}
