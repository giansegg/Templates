//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P4_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P4_H


#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P4_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class point {
    int a;
    int b;
public:
    point(int a, int y): a{a}, b{b} {}
    point() {};

    friend ostream& operator<< (ostream& os, const point& p) {
        os<<"{" << p.a <<", " << p.b << "}" << endl;
        return os;
    }

    int get_x() { return a; }
    int get_y() { return b; }
};


template<class T>
ostream& operator<<(ostream& os,const vector<T> &p){
    for(auto i = 0;i<p.size();i++){
        os<<p[i]<<"\n";
    }
    return os;
}


template<class T>
vector<T> make_smart_ptr(T V,T V2){
    vector<T> Temp;
    Temp.push_back(V);
    Temp.push_back(V2);
    return Temp;
}


template<class T>
vector<T> make_smart_ptr(T content){
    vector<T> A;
    A.push_back(content);
    return A;
}

template<class point>
vector<point> make_smart_ptr(int x,int y){
    point xy(x,y);
    vector<point> B;
    B.push_back(xy);
    return B;
}

template<class T>
class smart_ptr{
private:
    vector<T> M;
public:
    smart_ptr() {}

    smart_ptr(vector<T> vx) {
        this->M = vx;
    }

    smart_ptr& operator=(vector<T> vx){
        this->M= vx;
        return *this;
    }

    vector<T>& operator *(){
        return M;
    }

    auto operator->(){
        return this->M.begin();
    }
};


