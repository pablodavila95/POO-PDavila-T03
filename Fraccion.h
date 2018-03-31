//
// Created by Pablo on 31/03/2018.
//

#ifndef FRACCION_FRACCION_H
#define FRACCION_FRACCION_H

#include <string>


class string;

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion(int num, int den);
    std::string toString(Fraccion &i);

    friend Fraccion operator+ (const Fraccion &uno ,const Fraccion &dos);
    friend Fraccion operator- (const Fraccion &uno ,const Fraccion &dos);
    friend Fraccion operator* (const Fraccion &uno ,const Fraccion &dos);
    friend Fraccion operator/ (const Fraccion &uno ,const Fraccion &dos);
    friend bool operator< (const Fraccion &uno ,const Fraccion &dos);
    friend bool operator> (const Fraccion &uno ,const Fraccion &dos);
    friend bool operator<= (const Fraccion &uno ,const Fraccion &dos);
    friend bool operator>= (const Fraccion &uno ,const Fraccion &dos);
    friend bool operator== (const Fraccion &uno ,const Fraccion &dos);
    friend bool operator!= (const Fraccion &uno ,const Fraccion &dos);

    int getNumerador() const;

    int getDenominador() const;


};


#endif //FRACCION_FRACCION_H
