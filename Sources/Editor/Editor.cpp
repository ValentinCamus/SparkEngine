#include "Editor.hpp"

namespace Spark
{
    void Editor::Setup()
    {
        Application::Setup();
    }

    void Editor::Shutdown()
    {
        Application::Shutdown();
    }

    void Editor::Prepare(float deltaTime)
    {
        Application::Prepare(deltaTime);
    }

    void Editor::Draw(float deltaTime)
    {
        Application::Draw(deltaTime);
    }

    void Editor::ImGuiDraw(float deltaTime)
    {
        Application::ImGuiDraw(deltaTime);
    }
}