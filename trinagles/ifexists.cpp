#include <QCoreApplication>
#include "iostream"
#include "area.cpp"
#include "type.cpp"

using namespace std;
//функция, проверяющая, можно ли использовать переданные значения для построение треугольника
//функция так же вызывает функцию triangleArea(), для рассчета площади треугольника
//и функцию type() для определения типа треугольника


void ifExists(float a, float b, float c){
    cout << "Enter the sides of your triangle: " << endl;
    cin>>a;    cin>>b;    cin>>c;

    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout << "Triangle!"<<endl;
        triangleArea(a, b, c);
        type(a, b, c);
    }
    else {
        cout<<"This is not a triangle!"<<endl;

    }

}
