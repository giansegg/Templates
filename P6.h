//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P6_H


#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#include <iostream>
using namespace std;
template<typename T1, typename ... Params, typename T >
int index_of(T var2, int index = 0){

    if constexpr (is_same<T1, T>::value==true){
        return index;
    }

    else{
        if constexpr(sizeof...(Params) == 0  ) {
            return -1;
        }else{
            return index_of<Params...>(var2, ++index);
        }
    }
}
