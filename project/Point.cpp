#include "Point.h"

namespace Geometry {

// Constructor implementation
Point::Point(double x, double y) : x(x), y(y) {}

// Getters
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

// Setters
void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

// Friend Function: operator<<
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

} // namespace Geometry