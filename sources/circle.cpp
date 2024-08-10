#include "../includes/circle.hpp"

#include <iostream>


circle *circle::instance = nullptr;
circle::circle(/* args */)
{
}

circle::~circle()
{
}

circle &circle::getInstance(){
    if(instance == nullptr){
        instance = new circle();
    }
    return (*instance);
}

void circle::draw(){
    std::cout << "Criando um circulo" << std::endl;
}
