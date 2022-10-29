#include "ShapeList.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

int main() {
    ShapeList shape_list;
    double r1 = 8.3, r2 = 8.1;
    shape_list.addShape(new Circle(r1));
    shape_list.addShape(new Circle(r2));
    double a1 = 3.2, a2 = 5.2;
    shape_list.addShape(new Square(a1));
    shape_list.addShape(new Square(a2));
    double b1 = 6.3, b2 = 8.3, c1 = 7.4, c2 = 12.1;
    shape_list.addShape(new Triangle(a1, b1, c1));
    shape_list.addShape(new Triangle(a2, b2, c2));
    shape_list.writeShapesToConsole();
    shape_list.writeBiggestShapeToConsole();
    return 0;
}
