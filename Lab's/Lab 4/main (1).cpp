/*
********************************
*Винокуров Дмитрий ПИз-211     *
*18.02.2022                    *
*Лабораторная работа №3        *
********************************
*/

#include <iostream>

using namespace std;

int main()
{
	
	int i, j, cumCol = 0;
	int ColvoChisel = 0;
	int MassA[4][4] = { {-1,5,4,7,}, {-20,-5,4,8}, {7,-10,-7,-9}, {7,17,5,0} };
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (MassA[i][j] > 1) 
			{
				cumCol += MassA[i][j];
				ColvoChisel += 1;
				cout << cumCol << '\t'<< ColvoChisel << endl;
			}
		}
	}
	
}