#pragma once

#include <Core/Core.hpp>
#include <Application/Window.hpp>
#include <Application/WindowEventListener.hpp>

#include <GLFW/glfw3.h>

#define DEFAULT_APP_NAME "Application"
#define DEFAULT_APP_WIDTH 800
#define DEFAULT_APP_HEIGHT 600

namespace Spark
{
    class Application : public WindowEventListener
    {
    public:
        /// Default constructor.
        explicit Application(const char* name = DEFAULT_APP_NAME,
                             unsigned width   = DEFAULT_APP_WIDTH,
                             unsigned height  = DEFAULT_APP_HEIGHT);

        /// Default destructor.
        ~Application() override = default;

        /// Setup and start the draw loop.
        void Run();

        /// Stop the draw loop and close the application.
        inline void Stop() { m_isRunning = false; }

        /// Define the base application setup.
        virtual void Setup();

        /// Called when the application is closing.
        virtual void Shutdown();

        /// Called just before the draw loop.
        virtual void Prepare(float deltaTime);

        /// Draw loop.
        virtual void Draw(float deltaTime);

        /// GUI draw loop.
        virtual void ImGuiDraw(float deltaTime);

        /// Check if the application is running.
        inline bool IsRunning() const { return m_isRunning; }

        /// Event called when the user attempts to close the window.
        inline void OnWindowClosed() override { Stop(); }

    private:
        bool m_isRunning = false;

        /// The timer measures time elapsed since the application was initialized.
        double m_time = 0.0f;

        Window m_window = Window();
    };
} // namespace gir