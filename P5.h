//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P5_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P5_H


#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P5_H
// Primer caso
// Primer caso
template<typename T>
T suma_producto(T num){return num;}

// Segundo caso
template<typename T1, typename T2>
auto suma_producto(T1 num , T2 num2){
    return num*num2;
}

// Caso Folding
template<typename T1, typename T2, typename ... Params >
auto suma_producto(T1 first, T2 second, Params ... params){
    return  first * second + suma_producto(params...)  ;
}

