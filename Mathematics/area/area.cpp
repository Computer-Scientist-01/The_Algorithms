#include <iostream>
#include <cassert>
#include <cmath>
#include <iomanip>

namespace Area
{
    constexpr double pi = acos(-1.0);

    template <typename T>
    T square(T side)
    {
        assert(side >= 0);
        return side * side;
    }

    template <typename T>
    T rectangle(T length, T width)
    {
        assert(length >= 0 && width >= 0);
        return length * width;
    }

    template <typename T>
    T rhombus(T diagonal_1, T diagonal_2)
    {
        assert(diagonal_1 >= 0 && diagonal_2 >= 0);
        return (diagonal_1 * diagonal_2) / 2;
    }

    template <typename T>
    T parallelogram(T base, T height)
    {
        assert(base >= 0 && height >= 0);
        return base * height;
    }

    template <typename T>
    T trapezoid(T side_a, T side_b, T height)
    {
        assert(side_a >= 0 && side_b >= 0 && height >= 0);
        return ((side_a + side_b) * height) / 2;
    }

    template <typename T>
    T triangle(T base, T height)
    {
        assert(base >= 0 && height >= 0);
        return (base * height) / 2;
    }

    template <typename T>
    T ellipse(T semi_major, T semi_minor)
    {
        assert(semi_major >= 0 && semi_minor >= 0);
        return pi * semi_major * semi_minor;
    }

    template <typename T>
    T circle_area(T radius)
    {
        assert(radius >= 0);
        return pi * radius * radius;
    }

    template <typename T>
    T cube_surface(T edge)
    {
        assert(edge >= 0);
        return 6 * edge * edge;
    }

    template <typename T>
    T sphere_surface(T radius)
    {
        assert(radius >= 0);
        return 4 * pi * radius * radius;
    }

    template <typename T>
    T cylinder_surface(T radius, T height)
    {
        assert(radius >= 0 && height >= 0);
        return 2 * pi * radius * (radius + height);
    }

    template <typename T>
    T hemisphere_surface(T radius)
    {
        assert(radius >= 0);
        return 3 * pi * radius * radius;
    }
}

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n"
              << std::endl;

    // Demo 2D
    std::cout << "Square (side 5): " << Area::square(5.0) << std::endl;                        // 25
    std::cout << "Rectangle (4x3): " << Area::rectangle(4.0, 3.0) << std::endl;                // 12
    std::cout << "Trapezoid (a=3, b=5, h=4): " << Area::trapezoid(3.0, 5.0, 4.0) << std::endl; // 16 (fixed)
    std::cout << "Circle (r=2): " << Area::circle_area(2.0) << std::endl;                      // ~12.57
    std::cout << "Triangle (b=6, h=5): " << Area::triangle(6.0, 5.0) << std::endl;             // 15
    std::cout << "Ellipse (a=3, b=2): " << Area::ellipse(3.0, 2.0) << std::endl;               // ~18.85

    // Demo 3D Surfaces
    std::cout << "Cube (edge 2): " << Area::cube_surface(2.0) << std::endl;                // 24
    std::cout << "Sphere (r=3): " << Area::sphere_surface(3.0) << std::endl;               // ~113.10
    std::cout << "Cylinder (r=1, h=5): " << Area::cylinder_surface(1.0, 5.0) << std::endl; // ~18.85
    std::cout << "Hemisphere (r=2): " << Area::hemisphere_surface(2.0) << std::endl;       // ~37.70

    return 0;
}