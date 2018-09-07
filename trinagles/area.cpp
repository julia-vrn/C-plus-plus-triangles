#include <QCoreApplication>
#include "iostream"

using namespace std;

float triangleArea(float a, float b, float c){
    float p = 0.5*(a + b+ c);
    float area = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "The total area of your triangle is "<< area<<endl;
    return area;

}
