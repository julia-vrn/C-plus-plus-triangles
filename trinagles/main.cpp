#include <QCoreApplication>
#include "iostream"
#include "ifexists.cpp"
#include "type.cpp"


using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    float a = 0, b = 0, c = 0;

    cout << "Enter the sides of your triangle: " << endl;
    cin>>a;    cin>>b;    cin>>c;

    if (ifExists(a, b, c)){
        type(a, b, c);
    }else {
        cout << "This is not a triangle, try other parameters."<< endl;
    }




    return app.exec();
}
