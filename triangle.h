#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
#include "point.h"
#include "line.h"

class Triangle {
private:
    Point a;
    Point b;
    Point c;

public:
    // Constructor to initialize the points
    Triangle(Point a, Point b, Point c);

    // Copy constructor with const reference
    Triangle(const Triangle &other);

    // Method to check equality of two triangles
    bool equals(const Triangle &other) const;

    // Method to move the triangle by x, y units
    void move(double x, double y);

    // Method to flip the triangle
    void flip();

    // Method to calculate the surface area of the triangle
    double getSurface() const;

    // Method to get the string representation of the triangle
    std::string toString() const;
};

#endif // TRIANGLE_H