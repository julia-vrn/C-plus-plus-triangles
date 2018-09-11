#include <QCoreApplication>
#include "iostream"
#include "largest.cpp"
#include "triangles.cpp"

using namespace std;
//функция, использующая функция largest для определения наибольшего значения, которое передается функции typeOfTriangle
//в качестве параметра, определяющего гипотенузу треугольника
void type(float a, float b, float c){
     if((a==b)&&(a==c)){
        typeOfTriangle(a, b, c);
    }else{
        float hypo = 0;
        hypo = largest(a, b, c);
        if(hypo==a){
            typeOfTriangle(a, b, c);
        }else if(hypo==b){
            typeOfTriangle(b, a, c);
        }else if(hypo = c){
            typeOfTriangle(c, a, b);
        }
    }
}
