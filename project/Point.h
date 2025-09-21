#ifndef GEOMETRY_POINT_H
#define GEOMETRY_POINT_H

#include <iostream> // For ostream (optional, only if you want to overload <<)

namespace Geometry {

class Point {
private:
    double x;
    double y;

public:
    // Constructor (with default values)
    Point(double x = 0.0, double y = 0.0);

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(double x);
    void setY(double y);

    // Overload the output stream operator (pretty print)
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

} // namespace Geometry

#endif // GEOMETRY_POINT_H