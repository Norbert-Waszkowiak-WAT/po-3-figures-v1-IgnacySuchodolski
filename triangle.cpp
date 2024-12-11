#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include "point.h"
#include "triangle.h"

// Constructor
Triangle::Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}

// Copy constructor with const reference
Triangle::Triangle(const Triangle &other) : a(other.a), b(other.b), c(other.c) {}

// Equals method with const reference
bool Triangle::equals(const Triangle &other) const {
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c);
}

// Flip the triangle (invert points)
void Triangle::flip() {
    a.flip();
    b.flip();
    c.flip();
}

// Move the triangle by x, y units
void Triangle::move(double x, double y) {
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
}

// Calculate the surface area using Heron's formula
double Triangle::getSurface() const {
    double AB = std::hypot(a.getX() - b.getX(), a.getY() - b.getY());
    double BC = std::hypot(b.getX() - c.getX(), b.getY() - c.getY());
    double AC = std::hypot(a.getX() - c.getX(), a.getY() - c.getY());

    // Using Heron's formula
    double semiPerimeter = (AB + BC + AC) / 2;
    return std::sqrt(semiPerimeter * (semiPerimeter - AB) * (semiPerimeter - BC) * (semiPerimeter - AC));
}

// Return a string representation of the triangle
std::string Triangle::toString() const {
    std::stringstream oss;
    oss << std::fixed << std::setprecision(1);
    oss << "Triangle(" << a.toString() << ", " << b.toString() << ", " << c.toString() << ")";
    return oss.str();
}