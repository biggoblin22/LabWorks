/*
********************************
*Винокуров Дмитрий ПИз-211     *
*18.02.2022                    *
*Лабораторная работа №3        *
********************************
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double NussetlNumber, Delta, Sg = 0;
    double Re = 2 * pow(10, 4);
    double d = 25.4;
    int s1 = 60;
    int s2 = 30;
    int VarForS2 = 20;
    while (VarForS2 >= 5)
    {
        Sg = d * sqrt(0.25 * pow(s1 / d, 2) + pow(s2 / d, 2));
        s2 += VarForS2;
        VarForS2 -= 5;

        Delta = ((s1 - d) / (Sg - d));
        
        if (Delta < 0.7)
        {
            NussetlNumber = 0.27 * pow(Re, 0.6) * Delta;
        }
        else if (Delta > 0.7)
        {
            NussetlNumber = 0.295 * pow(Re, 0.6) * pow(Delta, 0.25);
        }

        cout << NussetlNumber << '\t' << Delta << endl;
    }

    

}
