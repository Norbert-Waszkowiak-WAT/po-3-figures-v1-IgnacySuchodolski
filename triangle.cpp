#include "point.h"
#include "line.h"
#include "triangle.h"
#include <sstream>
#include <iomanip>
using namespace std;

Triangle::Triangle(Point a,Point b, Point c): a(a), b(b), c(c) {};

Triangle::Triangle(Triangle &other):  a(other .a),   b(other.b),  c(other.c)  {};

bool Triangle 
