#pragma once

#include <Core/Core.hpp>
#include <Application/Application.hpp>

namespace Spark
{
    class Editor : public Application
    {
    public:
        using Application::Application;

        /// Define the base application setup.
        void Setup() override;

        /// Called when the application is closing.
        void Shutdown() override;

        /// Called just before the draw loop.
        void Prepare(float deltaTime) override;

        /// Draw loop.
        void Draw(float deltaTime) override;

        /// GUI draw loop.
        void ImGuiDraw(float deltaTime) override;
    };
}

