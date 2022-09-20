//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P9_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P9_H


#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P9_H
#include <iostream>
using namespace std;
template <typename T, size_t sz>
void init_array(T(&arr)[sz], int in=0, int paso=1){
    for(int i=0; i<sz;i++){
       arr[i]= in+i*paso;
    }
}
template<typename T, size_t sz>
void init_array(T (&arr)[sz], int inicial_value, int st_final, int paso) {
    for (auto i = 0; i < sz; i++) {
        arr[i] = inicial_value + i * paso;
        if ((arr[i] + paso) >= st_final) {

        }
        return;

    }
}