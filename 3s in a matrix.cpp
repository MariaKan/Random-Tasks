#include<iostream>
#include<conio.h>
#define R 4
#define C 3

using namespace std;


int main()
{

	int array[R][C] = { { 3, 2, 3 }, { 4, 5, 3 }, { 7, 3, 9 }, {3, 11, 12} };

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (array[i][j] == 3)
			{
				cout << "(" << i << "," << j << ")" << endl;
			}
		}
	}





	_getch();
	return 0;
}