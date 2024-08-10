#pragma once


//interfaces e classes abstratas não tem cosntrutor
class shape
{
public:
    ~shape() = default;
    virtual void draw() = 0;
};

