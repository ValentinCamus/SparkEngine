#include <iostream>

#include <Core/Core.hpp>

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

    Spark::Logger::Info("Spark Engine: Shutdown");
    
    return EXIT_SUCCESS;
}
