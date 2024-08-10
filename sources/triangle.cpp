#include "../includes/triangle.hpp"

#include <iostream>

triangle *triangle::instance = nullptr;
triangle::triangle(/* args */)
{
}

triangle::~triangle()
{
}

triangle &triangle::getInstance(){
    if(instance == nullptr){
        instance = new triangle();
    }
    return (*instance);
}

void triangle::draw(){
    std::cout << "Criando um triangulo" << std::endl;
}