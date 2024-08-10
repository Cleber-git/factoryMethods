#pragma once

#include "shape.hpp"

class circle : public shape
{
private:
    circle(/* args */);
    circle(const circle*) = delete;
    static circle *instance;
public:
    ~circle();
    void draw()override;
    static circle &getInstance(); 
};

