#include "includes/factoreShape.hpp"
#include "includes/circle.hpp"
#include "includes/shape.hpp"
#include "includes/square.hpp"
#include "includes/triangle.hpp"

#include <iostream>

using namespace std;

/*
    Utilizando design paterns criacional <Fábrica de objetos> para criar três formas geométricas diferentes com o mesmo método stático através de uma classe fábrica chamada FactoreMethods.
*/

/*
    Percebi no decorrer do aprendizado que uma fábrica de métodos conta com, no mínimo, cinco conceitos do paradígma POO: Herança, Abstração, Polimorfismo, Sobrecarga e Encapsulamento.

*/

int main(){

    // Desenhando um Circulo
    shape &makeCircle = factoreShape::makeInstance(factoreShape::CIRCLE);
    makeCircle.draw();

    // Desenhando um Triangulo
    shape &makeTriangle = factoreShape::makeInstance(factoreShape::TRIANGLE);
    makeTriangle.draw();

    // Desenhando um Quadrado
    shape &makeSquare = factoreShape::makeInstance(factoreShape::SQUARE);
    makeSquare.draw();

    return 0;
}

/*       OUTPUT
    Criando um circulo
    Criando um triangulo
    Criando um quadrado 
*/
