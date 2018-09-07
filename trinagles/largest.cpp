#include <QCoreApplication>
#include "iostream"

using namespace std;

//функция, определющая наибольшее из переданных значений

float largest(float a, float b, float c){
    float hypo = 0;
    if((a > b)&&(a > c)){
        hypo = a;
        cout << "the largest number is "<<a<<endl;
        return hypo;
    }else if((b> a)&&(b> c)){
        hypo = b;
        cout << "the largest number is "<<b<<endl;
        return hypo;
    }else if((c > a)&&(c > b)){
        hypo = c;
        cout << "the largest number is "<<c<<endl;
        return hypo;
    }
}
