#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include <string>
#include "point.h"  // Only include what is necessary

using namespace std;

class Quadrilateral {
private:
    Point a;
    Point b;
    Point c;
    Point d;

public:
    // Constructor to initialize the points
    Quadrilateral(Point a, Point b, Point c, Point d);

    // Copy constructor
    Quadrilateral(const Quadrilateral &other);

    // Method to check if two quadrilaterals are equal (const because it does not modify the object)
    bool equals(const Quadrilateral &other) const;

    // Method to flip the quadrilateral (flip each point)
    void flip();

    // Method to move the quadrilateral by x, y units
    void move(double x, double y);

    // Method to compute the surface area of the quadrilateral (const because it does not modify the object)
    double getSurface() const;

    // Method to get a string representation of the quadrilateral (const because it does not modify the object)
    string toString() const;
};

#endif // QUADRILATERAL_H