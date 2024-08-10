#pragma once

#include "shape.hpp"

class triangle : public shape
{
private:
    triangle(const triangle*) = delete;
    static triangle *instance;
    triangle(/* args */);
public:
    ~triangle();
    void draw()override;
    static triangle &getInstance();

};

