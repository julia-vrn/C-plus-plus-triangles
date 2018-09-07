#include <QCoreApplication>
#include "iostream"
#include "area.cpp"

using namespace std;
//функция, проверяющая, можно ли использовать переданные значения для построение треугольника
//функция так же вызывает функцию triangleArea, для рассчета площади треугольника
bool ifExists(float a, float b, float c){

    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout << "Triangle!"<<endl;
        triangleArea(a, b, c);
        return true;
    }
    else {
        cout<<"This is not a triangle!";
        return false;
    }

}
