//
// Created by Ivan Yanchenko on 29.10.2022.
//

#ifndef CW2_SHAPELIST_H
#define CW2_SHAPELIST_H

#include "Shape.h"
#include <vector>

class ShapeList {
public:
    void writeShapesToConsole();
    void addShape(Shape* shape);
    void writeBiggestShapeToConsole();
    ShapeList();
private:
    std::vector<Shape*> shapes;
};


#endif //CW2_SHAPELIST_H
