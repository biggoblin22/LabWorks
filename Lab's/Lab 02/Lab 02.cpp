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
    int mass = 75;
    int KoefResist = 8;
    double time = 0;
    double SpeedUpPowerWeight = 9.80665;
    double Speed;
    while (time < 5) {
        Speed = sqrt((SpeedUpPowerWeight * mass) / KoefResist) * tanh(time * sqrt((SpeedUpPowerWeight * KoefResist) / mass));
        cout.precision(4);
        cout << time << "\t" << Speed << endl;
        time += 0.25;
        if (time == 1) {
            break;
        }
    }
    do {
        Speed = sqrt((SpeedUpPowerWeight * mass) / KoefResist) * tanh(time * sqrt((SpeedUpPowerWeight * KoefResist) / mass));
        cout.precision(4);
        cout << time << "\t" << Speed << endl;
        time += 1;
    } while (time <= 5);

        
}