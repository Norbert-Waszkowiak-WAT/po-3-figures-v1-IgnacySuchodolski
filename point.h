#ifndef POINT_H
#define POINT_H

#include <string>

class Point {
private:
    double x;
    double y;

public:

    Point(double x, double y);


    Point(const Point &other);

    bool equals(const Point &other) const;

    // Method to get the string representation of the point
    std::string toString() const;

    // Accessor methods for x and y
    double getX() const;
    double getY() const;

    // Method to flip the point (invert x and y)
    void flip();

    // Method to move the point by a, b
    void move(double a, double b);
};

#endif // POINT_H