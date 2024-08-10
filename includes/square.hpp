#pragma once 

#include "shape.hpp"

class square: public shape
{
private:
    square(/* args */);
    static square *instance;
    square(const square*) = delete;
public:
    ~square();
    void draw()override;
    static square &getInstance();
};


