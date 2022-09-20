//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
#include <iostream>

using namespace std;

template<typename T>
void print(T begin,T end, ostream &os,string cont){
    for(auto i=begin;i!=end;i++){
        if(i!=begin) os << cont;
        os <<*i;
    }
    os<<endl;
}

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
