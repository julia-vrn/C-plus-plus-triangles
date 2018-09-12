#include <QCoreApplication>
#include "iostream"
#include "largest.cpp"
#include "triangles.cpp"

using namespace std;
//функция, использующая функция largest для определения наибольшего значения, которое передается функции typeOfTriangle
//в качестве параметра, определяющего гипотенузу треугольника
void type(float a, float b, float c){
     //если введены одинаковые значения
    if(((a==b)&&(a==c))){
        cout << "This is an equilateral triangle"<< endl; //равносторонний треугольник
    }
    //если введены значения, где два значения равны, а третье значение меньше
    else if (((a<b)&&(b==c))||((b<a)&&(a==c))||((c<a)&&(a==b))) {
        cout << "This is an acute isosceles triangle" <<endl; //остроугольный равнобедренный треугольник
    }
    else{
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
