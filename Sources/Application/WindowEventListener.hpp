#pragma once

#include <Core/Core.hpp>

namespace Spark
{
    class WindowEventListener
    {
    public:
        virtual ~WindowEventListener() = default;

        /// Event called when the user attempts to close the window.
        virtual void OnWindowClosed() {}

        /// Event called when the size of the window has changed.
        /// @warning: Do not confuse window and viewport.
        virtual void OnWindowResize(int width, int height)
        {
            SPARK_UNUSED(width);
            SPARK_UNUSED(height);
        }

        /// Event called when a key is pressed.
        virtual void OnKeyPressed(int keyCode)
        {
            SPARK_UNUSED(keyCode);
        }

        /// Event called when a key is released.
        virtual void OnKeyReleased(int keyCode)
        {
            SPARK_UNUSED(keyCode);
        }

        /// Event called when a mouse button is pressed.
        virtual void OnMousePressed(int button)
        {
            SPARK_UNUSED(button);
        }

        /// Event called when a mouse button is released.
        virtual void OnMouseReleased(int button)
        {
            SPARK_UNUSED(button);
        }

        /// Event called when the mouse position changed.
        virtual void OnMouseMoved(double xPos, double yPos)
        {
            SPARK_UNUSED(xPos);
            SPARK_UNUSED(yPos);
        }

        /// Event called when a scrolling device is used.
        virtual void OnMouseScrolled(double xOffset, double yOffset)
        {
            SPARK_UNUSED(xOffset);
            SPARK_UNUSED(yOffset);
        }
    };
} // namespace Spark