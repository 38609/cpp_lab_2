#include <iostream>
#include <map>

#include "converter.h"

using namespace std;

int main() {
    Converter first("4");
    Converter second("4S");
    Converter third("4M");
    Converter fourth("2.1G");
    Converter fifth("1.2421G");
    Converter sixth("94T");
    Converter seventh("84.23333P");
    Converter eighth("6.434E");
    cout << first.fromReadable() << endl;
    cout << second.fromReadable() << endl;
    cout << third.fromReadable() << endl;
    cout << fourth.fromReadable() << endl;
    cout << fifth.fromReadable() << endl;
    cout << sixth.fromReadable() << endl;
    cout << seventh.fromReadable() << endl;
    cout << eighth.fromReadable() << endl;
}