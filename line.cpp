#include "point.h"
#include "line.h"
#include <sstream>
#include <iomanip>
using namespace std;

Line::Line(Point a,Point b): a(a), b(b) {};

Line::Line(Line &other):  a(other .a),   b(other.b)  {};

bool Line::equals(Line &other){

    return a.equals(other.a) && b.equals(other.b);
}

string Line::toString(){

    return "Line("+a.toString()+", "+b.toString()+")";
}

void Line::flip(){
    a.flip();

    b.flip();
}

void Line::move(double p, double d){
    a.move(p, d);

    b.move(p, d);
}

