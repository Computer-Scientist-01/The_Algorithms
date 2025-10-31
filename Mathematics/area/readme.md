### Area Formulas in Current C++ Code

- **Completed**: The shape/formula is directly implemented
- **Partially Completed**: Covered in a special case (e.g., cube as a cuboid variant) or simplified version.
- **Not Completed**: No implementation
- **Notes**: Includes formula reference




| Shape                           | Status        | Current Implementation/Notes                                                                                                         |
| ------------------------------- | ------------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| Square                          | Completed     | `square(T side)` – Exact match; uses templates for generics.                                                                         |
| Rectangle                       | Completed     | `rectangle(T length, T width)` – Exact; rename params to a/b if desired.                                                             |
| Triangle (basic)                | Completed     | `triangle(T base, T height)` – Covers core case; added in improvements.                                                              |
| Triangle (SAS)                  | Not Completed | Suggestion: Add `triangle_sas(T a, T b, T gamma_rad)` using `<cmath> sin()`. Ties to trig (Day 11); implement for angle-based tests. |
| Triangle (Heron's)              | Not Completed | Suggestion: `heron(T a, T b, T c)` with semi-perimeter calc. Algebra 2 roots; great for side-only input.                             |
| Isosceles Triangle              | Not Completed | Suggestion: Extend triangle func or new one; uses sqrt (from `sqrt_double.cpp` inspo). Geo Day 7.                                    |
| Equilateral Triangle            | Not Completed | Suggestion: `equilateral(T side)` with `sqrt(3)`. Simple constant; preview regular polygons.                                         |
| Rhombus / Kite                  | Completed     | `rhombus(T diagonal_1, T diagonal_2)` – Exact; diagonals d/e.                                                                        |
| Parallelogram                   | Completed     | `parallelogram(T base, T height)` – Exact.                                                                                           |
| Trapezoid                       | Completed     | `trapezoid(T side_a, T side_b, T height)` – Fixed in improvements; parallels a/c.                                                    |
| Regular Hexagon                 | Not Completed | Suggestion: `regular_hexagon(T side)`; build on equilateral. Geo + algebra 2.                                                        |
| Regular Octagon                 | Not Completed | Suggestion: `regular_octagon(T side)`; constants from `<cmath>`. Polygon series starter.                                             |
| Regular Polygon (n sides)       | Not Completed | Suggestion: `regular_polygon(int n, T side)` with cot via tan(π/2 - x). Advanced geo; use for generalizer.                           |
| Circle                          | Completed     | `circle_area(T radius)` – Exact, optimized with constexpr pi.                                                                        |
| Circular Sector                 | Completed     | Suggestion: `sector(T radius, T theta_rad)`; trig sin tie-in (Day 11). Arc length variant too.                                       |
| Ellipse                         | Completed     | `ellipse(T semi_major, T semi_minor)` – Exact; added in improvements.                                                                |
| Integral (under curve)          | Completed     | Suggestion: Skip for Phase 1 (numerical approx via Simpson's from repo's `integral_approximation.cpp`). Calc preview.                |
| Sphere (surface)                | Completed     | `sphere_surface(T radius)` – Exact surface area (wiki's 3D section).                                                                 |
| Cuboid (surface)                | Completed     | `cube_surface(T edge)` covers special case (a=b=c); extend to `cuboid(T a, T b, T c)`. Algebra 1 systems.                            |
| Cylinder (surface, incl. bases) | Completed     | `cylinder_surface(T radius, T height)` – Exact total surface.                                                                        |
| Cone (surface, incl. base)      | Not Completed | Suggestion: `cone_surface(T radius, T height)`; uses hypotenuse sqrt. Geo solids extension.                                          |
| Torus (surface)                 | Not Completed | Suggestion: `torus_surface(T major_r, T minor_r)`; advanced, post-trig.                                                              |
| Surface of Revolution           | Completed     | Suggestion: Defer to Phase 2 (numerical integration); ties to calculus for PL simulations.                                           |
| Hemisphere (surface)            | Completed     | `hemisphere_surface(T radius)` – 3πr² (curved + base); bonus not in wiki but useful.                                                 |
