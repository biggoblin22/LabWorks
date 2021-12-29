/*
********************************
*Винокуров Дмитрий ПИз-211     *
*29.12.2021                    *
*Лабораторная работа №2        *
********************************
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double mass0 = 1125;
    double time0 = 20.5;
    int daysMassive[6] = { 1, 2, 5, 10, 20, 50 };
    double DeltaMass;
    for (int i = 0; i < 6; i++)
    {
        DeltaMass = mass0 * exp(-(log(2) / time0) * daysMassive[i]) * (exp(log(2) / time0) - 1);
        cout.precision(4);
        cout << DeltaMass << endl;
    }
    
}