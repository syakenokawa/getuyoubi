#include "Calculator.h"
#include <iostream>

using namespace std;



void Calculator::SetNumber(double a, double b)
{
    num1 = a;
    num2 = b;
}



double Calculator::add()
{
    return num1 + num2;
}

double Calculator::subtract()
{
    return num1 - num2;
}

double Calculator::multiply()
{
    return num1 * num2;
}



double Calculator::divide()
{
    if (num2 == 0)
    {
        cout << "ゼロでは割れません" << endl;
        return 0;
    }

    return num1 / num2;
}










