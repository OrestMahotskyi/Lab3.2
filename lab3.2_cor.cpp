// lab3.2.cpp
// <Магоцький Орест Маркович>
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 18
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, a, b, c, F;
    cout << "x = "; cin >> x;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;


    //перший варіант
    if(x < 0 && b!= 0)
    {
        F = (a * (x * x)) - (b * (x * x));
    }
    if(x > 0 && b == 0)
    {
        F = (x - a)/ (x - c);
    }
    if(!(x < 0 && b != 0) && !(x > 0 && b == 0))
    {
        F = (x + 5) / (c * (x - 10));
    }
    cout << "1) F = " << F << endl;


    // спосіб 2
    if(x < 0 && b!= 0)
    {
        F = (a * (x * x)) - (b * (x * x));
    }
    else
        if(x > 0 && b == 0)
        {
            F = (x - a)/ (x - c);  
        }
        else
            F = (x + 5) / (c * (x - 10));
    cout << "2) F = " << F << endl;

    cin.get();

    return 0;
}