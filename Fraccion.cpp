//
// Created by Pablo on 31/03/2018.
//

#include <iostream>
#include "Fraccion.h"
Fraccion operator+ (const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    int numR, denR;

    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }

    numR= num1 + num2;
    denR= den1;

    Fraccion resultado(numR, denR);
    resultado.toString(resultado);
    return resultado;
}

Fraccion::Fraccion(int num, int den) {
    this->denominador=den;
    this->numerador=num;
}


Fraccion operator-(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    int numR, denR;

    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }

    numR= num1 - num2;
    denR= den1;

    Fraccion resultado(numR, denR);
    resultado.toString(resultado);
    return resultado;
}

Fraccion operator*(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0, den2 = 0;
    int numR, denR;


    num1 = uno.numerador;
    den1 = uno.denominador;

    num2 = dos.numerador;
    den2 = dos.denominador;

    numR= num1 * num2;
    denR= den1 * den2;

    Fraccion resultado(numR, denR);
    resultado.toString(resultado);
    return resultado;
}

Fraccion operator/(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0, den2 = 0;
    int numR, denR;


    num1 = uno.numerador;
    den1 = uno.denominador;

    num2 = dos.numerador;
    den2 = dos.denominador;

    numR= num1 * den2;
    denR= den1 * num2;

    Fraccion resultado(numR, denR);
    resultado.toString(resultado);
    return resultado;
}

bool operator<(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }
    if (num1 < num2) {
        std::cout<<"True"<<"\n";
    }
    else {
        std::cout<<"False"<<"\n";
    }
    return num1 < num2;
}

bool operator>(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }
    if (num1 > num2) {
        std::cout<<"True"<<"\n";
    }
    else {
        std::cout<<"False"<<"\n";
    }
    return num1 > num2;
}

bool operator<=(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }
    if (num1 <= num2) {
        std::cout<<"True"<<"\n";
    }
    else {
        std::cout<<"False"<<"\n";
    }
    return num1 <= num2;
}

bool operator>=(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }
    if (num1 >= num2) {
        std::cout<<"True"<<"\n";
    }
    else {
        std::cout<<"False"<<"\n";
    }
    return num1 >= num2;
}

bool operator==(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }
    if (num1 == num2) {
        std::cout<<"True"<<"\n";
    }
    else {
        std::cout<<"False"<<"\n";
    }
    return num1 == num2;
}

bool operator!=(const Fraccion &uno ,const Fraccion &dos) {
    int num1 = 0, den1 = 0;
    int num2 = 0;
    if (uno.denominador != dos.denominador) {
        num1= uno.numerador * dos.denominador;
        num2= dos.numerador * uno.denominador;

        den1 = uno.denominador * dos.denominador;
    }
    else if (uno.denominador == dos.denominador){
        num1 = uno.numerador;
        den1 = uno.denominador;

        num2 = dos.numerador;
    }
    if (num1 != num2) {
        std::cout<<"True"<<"\n";
    }
    else {
        std::cout<<"False"<<"\n";
    }
    return num1 != num2;
}

int Fraccion::getNumerador() const {
    return numerador;
}

int Fraccion::getDenominador() const {
    return denominador;
}

std::string Fraccion::toString(Fraccion &i) {
    std::string num, den;
    num = std::to_string(i.getNumerador());
    den = std::to_string(i.getDenominador());

    std::cout<< "Resultado: " + num + " / " + den <<"\n";
}
