#pragma once

#include <string>
#include <sstream>

#include <glm/glm.hpp>

namespace Spark
{
    class Object
    {
    public:
        /// Destructor.
        virtual ~Object() = default;

        /// @return: the string representation of the object.
        virtual std::string ToString() const { return "<Object>"; }

        template<typename OStream>
        friend OStream& operator<<(OStream &os, const Object& obj)
        {
            return os << obj.ToString();
        }
    };

    class Vec2f : public Object, public glm::vec2
    {
    public:
        inline std::string ToString() const override
        {
            std::stringstream ss;
            ss << "[x=" << x << ", y=" << y << "]";
            return ss.str();
        }
    };

    class Vec3f : public Object, public glm::vec3
    {
    public:
        inline std::string ToString() const override
        {
            std::stringstream ss;
            ss << "[x=" << x << ", y=" << y << ", z=" << z << "]";
            return ss.str();
        }
    };

    class Vec4f : public Object, public glm::vec4
    {
    public:
        inline std::string ToString() const override
        {
            std::stringstream ss;
            ss << "[x=" << x << ", y=" << y << ", z=" << z << ", w=" << w << "]";
            return ss.str();
        }
    };

    class Vec2i : public Object, public glm::ivec2
    {
    public:
        inline std::string ToString() const override
        {
            std::stringstream ss;
            ss << "[x=" << x << ", y=" << y << "]";
            return ss.str();
        }
    };

    class Vec3i : public Object, public glm::ivec3
    {
    public:
        inline std::string ToString() const override
        {
            std::stringstream ss;
            ss << "[x=" << x << ", y=" << y << ", z=" << z << "]";
            return ss.str();
        }
    };

    class Vec4i : public Object, public glm::ivec4
    {
    public:
        inline std::string ToString() const override
        {
            std::stringstream ss;
            ss << "[x=" << x << ", y=" << y << ", z=" << z << ", w=" << w << "]";
            return ss.str();
        }
    };

    class Mat4f : public Object, public glm::mat4
    {
    public:
        inline std::string ToString() const override
        {
            return "<Mat4f>";
        }
    };
}