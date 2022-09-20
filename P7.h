//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
#include <list>
#include <vector>
#include <array>
#include <map>

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
using namespace std;
template<typename T>
ostream& operator<<(ostream& os, list<T> &conte){
    os << "{";
     for(auto it = begin(conte); it != end(conte); it++ ){
         os<<*it;
         if(prev(end(conte)) != it ){
             os << ", ";
         }
     }
     os << "}";
   return os;
 }
template<typename T>
ostream& operator<<(ostream& os, vector<T> &conte){
    os << "{";
    for(auto it = begin(conte); it != end(conte); it++ ){
        os<<*it;
        if(prev(end(conte)) != it ){
            os << ", ";
        }
    }
    os << "}";
    return os;
}
template<typename T1, typename T2>
ostream& operator<<(ostream& os, map<T1, T2> &map){
    auto a= map.begin();
    auto b= map.end();
    os<<"{";
    int i=0;
    for (a;a!=b;a++){
        if(i==map.size()-1){
            os<<"{"<<a->first<<": "<<a->second<<"}";
        }
        else {
            os<<"{"<<a->first<<": "<<a->second<<"}, ";}
        i++;
    }
    os<<"}";
    return os;
}
template<typename T, size_t sz>
ostream& operator<<(ostream& os,array<T, sz> arr){
    os << "{";
    for(int i=0; i<sz; i++ ){
        if (i==sz-1){
            os<<arr[i];}
        else{
            os<<arr[i]<<", ";
        }

    }
    os << "}";
    return os;
}