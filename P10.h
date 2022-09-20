//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P10_H


#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
#include <iostream>

using namespace std;
template <typename T>
class searcher{
    int n = 0;
    T vec = {};
public:
    searcher(){};

    searcher(T &vec_){
        int n = 0;
        sort(vec_.begin(), vec_.end());
        vec = vec_;
        n = vec.size();
    };



    friend int operator << (const searcher<T> &classseee ,const int dato){
        for(auto i = 0; i < classseee.vec.size() ; i++ ){
            if(classseee.vec[i] == dato){
                return i;
            }
        }
        return -1;
    };




};