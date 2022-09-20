//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P8_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P8_H

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P8_H
#include <iostream>
using namespace std;
template <typename T>
bool are_same(){
    return true;
}
template <typename T1, typename T2, typename ...Ts>
bool are_same() {
    if (is_same<T1, T2>::value==true){
        if(sizeof...(Ts)==0) {
            return true;
        } else{
            return are_same<T2,Ts...>();
        }
    }
    else
        return false;
}




