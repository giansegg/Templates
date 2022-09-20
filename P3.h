//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;
template<typename Iterator>
typename Iterator::value_type sumarizar(Iterator Begin, Iterator End,typename Iterator::value_type Inicilizador){
    typename Iterator::value_type suma = Inicilizador;
    for(auto it = Begin ; it != End; it++){
        suma += (*it);
    }

    return suma;
}





#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
