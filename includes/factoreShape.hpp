#pragma once

#include "shape.hpp"
#include <iostream>

class factoreShape : public shape
{
public:
    enum TypeShape{
        CIRCLE,
        TRIANGLE,
        SQUARE
    };
private:
    static shape *instance();
    factoreShape(const factoreShape*) = delete;
    factoreShape(/* args */);
public:
    ~factoreShape();
    static shape &makeInstance(TypeShape type);



};

