/*
********************************
*Винокуров Дмитрий ПИз-211     *
*29.12.2021                    *
*Лабораторная работа №1        *
********************************
*/



#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double Length = 0.994;
	int Angle = 50;
	double SpeedUpPowerWeight = 9.80665;
	double Period1, Period2, Period3;

	Period1 = 2 * M_PI * pow((Length / SpeedUpPowerWeight), 0.5);
	Period2 = 2 * M_PI * sqrt((Length / SpeedUpPowerWeight) * (1 + (0.0625 * pow(Angle, 2))));
	Period3 = 2 * M_PI * sqrt((Length / SpeedUpPowerWeight) * (1 + ((0.25 * pow(sin(Angle / 2), 2)) + (0.140625 * pow(sin(Angle / 2), 4)))));

	cout << Period1 << endl;
	cout << Period2 << endl;
	cout << Period3 << endl;
}