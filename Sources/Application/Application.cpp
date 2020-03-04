#include "Application.hpp"

#define INITIAL_VIEWPORT_WIDTH 500
#define INITIAL_VIEWPORT_HEIGHT 500

namespace Spark
{
    Application::Application(const char* name, unsigned int width, unsigned int height)
    {
        // Initialize GLFW window
        m_window.Init(name, width, height);
        m_window.SetupEventsCallback(this);
    }

    void Application::Shutdown()
    {
        m_window.Shutdown();
    }

    void Application::Run()
    {
        m_isRunning = true;

        while (m_isRunning)
        {
            /// Per-frame time logic
            auto currentTime = m_window.GetTime();
            auto deltaTime = float(m_time - currentTime);
            m_time = currentTime;

            m_window.PollEvents();

            Prepare(deltaTime);
            Draw(deltaTime);

            ImGuiDraw(deltaTime);

            m_window.SwapBuffers();
        }
    }

    void Application::Setup()
    {

    }

    void Application::Prepare(float deltaTime)
    {
        SPARK_UNUSED(deltaTime);
    }

    void Application::Draw(float deltaTime)
    {
        SPARK_UNUSED(deltaTime);
    }

    void Application::ImGuiDraw(float deltaTime)
    {
        SPARK_UNUSED(deltaTime);
    }

} // namespace Spark