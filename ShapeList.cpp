//
// Created by Ivan Yanchenko on 29.10.2022.
//

#include "ShapeList.h"

ShapeList::ShapeList() {
    shapes.clear();
}

void ShapeList::writeShapesToConsole() {
    for(Shape* shape : shapes){
        shape->writeToConsole();
    }
}

void ShapeList::addShape(Shape *shape) {
    shapes.push_back(shape);
}

void ShapeList::writeBiggestShapeToConsole() {
    if(shapes.empty()){
        std::cout << "Shapes list is empty!";
        return;
    }
    int id = 0;
    double mx = shapes[0]->calculateArea(), tmp_area;
    for(int i = 1; i < shapes.size(); ++i){
        tmp_area = shapes[i]->calculateArea();
        if(mx < tmp_area){
            mx = tmp_area, id = i;
        }
    }
    std::cout << "Larges shape:\n";
    shapes[id]->writeToConsole();
}
