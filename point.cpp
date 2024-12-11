#include "point.h"
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

// Constructor to initialize the point with x and y coordinates
Point::Point(double x, double y): x(x), y(y) {}

// Copy constructor with const reference
Point::Point(const Point &other): x(other.x), y(other.y) {}

// Getter for x coordinate (const because it does not modify the object)
double Point::getX() const {
    return x;
}

// Getter for y coordinate (const because it does not modify the object)
double Point::getY() const {
    return y;
}

// Method to compare two points for equality (const because it does not modify the object)
bool Point::equals(const Point &other) const {
    return other.x == x && other.y == y;
}

// Method to get the string representation of the point
string Point::toString() const {
    ostringstream oss;
    oss << fixed << setprecision(1); // Format output with 1 decimal precision
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
}

// Method to flip the point (invert x and y coordinates)
void Point::flip() {
    x = -x;
    y = -y;
}

// Method to move the point by a, b
void Point::move(double a, double b) {
    x += a;
    y += b;
}
