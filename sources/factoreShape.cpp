#include "../includes/factoreShape.hpp"
#include "../includes/circle.hpp"
#include "../includes/shape.hpp"
#include "../includes/square.hpp"
#include "../includes/triangle.hpp"

shape factoreShape::*instance = nullptr;
factoreShape::factoreShape(/* args */)
{
}

factoreShape::~factoreShape()
{
}

shape &factoreShape::makeInstance(TypeShape type){
    switch (type)
    {
    case CIRCLE:
        return circle::getInstance();
    case TRIANGLE:
        return triangle::getInstance();
    case SQUARE:
        return square::getInstance();
    default:
        break;
    }

}