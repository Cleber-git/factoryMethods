#include "../includes/square.hpp"

#include <iostream>

square *square::instance = nullptr;
square::square(/* args */)
{
}

square::~square()
{
}

square &square::getInstance(){
    if(instance == nullptr){
        instance = new square();
    }
    return (*instance);
}

void square::draw(){
    std::cout << "Criando um quadrado" << std::endl;
}