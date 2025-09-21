#include "Point.h"
#include <iostream>
using namespace Geometry;
using namespace std;

int main() {
    // 1. Default point (0, 0)
    Point p1;
    cout << "Default Point: " << p1 << endl;

    // 2. Initialized point
    Point p2(3.5, 4.2);
    cout << "Initialized Point: " << p2 << endl;

    // 3. Update coordinates using setters
    p2.setX(10.0);
    p2.setY(20.0);
    cout << "Updated Point: " << p2 << endl;

    // 4. Access individual values
    cout << "X coordinate: " << p2.getX() << endl;
    cout << "Y coordinate: " << p2.getY() << endl;

    return 0;
}