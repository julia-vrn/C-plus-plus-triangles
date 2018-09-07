#include <QCoreApplication>
#include "iostream"

using namespace std;
//функция, определяющая тип треугольника, в качестве параметра принимает гипотенузу, катет 1, катет 2

void typeOfTriangle(float hypo, float cath1, float cath2){
    float sqhypo = hypo*hypo; // квадрат гипотенузы
    float sqcathSum = cath1*cath1 + cath2*cath2; // квадрат катетов

    //прямоугольные треугольники
    if(sqhypo==sqcathSum){
        if(cath1==cath2){
            cout << "This is a right isosceles triangle."<<endl;
        }else{
            cout << "This is a right triangle."<<endl;
        }
    }
    //остроугольные треугольники
    else if(sqhypo<sqcathSum){
        if((hypo>cath1)&&(hypo>cath2)&&(cath1==cath2)){
            cout << "This is an acute isosceles triangle"<<endl;
        }else if((hypo==cath1)&&(hypo==cath2)&&(cath1==cath2)){
            cout << "This is an acute equilateral triangle";
        }else {
            cout << "This is an acute triangle."<<endl;
        }
    }
    //тупоугольные треугольники
    else if(sqhypo>sqcathSum){
        if(cath1==cath2)
        {
            cout << "This is an obtuse isosceles triangle."<<endl;
        }else{
            cout << "This is an obtuse triangle."<<endl;
        }
    }

}
