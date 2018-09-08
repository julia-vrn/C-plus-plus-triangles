#include <QCoreApplication>
#include "iostream"
#include "ifexists.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    float a = 0, b = 0, c = 0;
    while (true){
        ifExists(a, b, c);
    }
    return app.exec();
}
