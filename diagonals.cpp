#include<iostream>
#include<conio.h>
#define R 3
#define C 3

using namespace std;

bool ones(int array[R][C])
{
	int flag = true;
	for (int i = 0; i < R; i++)
	{
		if (array[i][i] == 1)
		{
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
	}

	if (!flag)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool two(int array[R][C])
{

	int start_row = C-1;
	bool flag = true;
	for (int i = start_row; i >= 0; i--)
	{
		for (int j = 0; j <= R; j++)
		{
			if (array[j][i] == 2)
			{
				flag = true;
				break;
			}
			else
			{
				flag = false;
			}
		}
	}

	return flag;
}

int main()
{
	bool flag = true;
	int array[R][C] = { { 1, 2, 2}, { 4, 1, 3 }, { 2, 3, 1 } };

	if (ones(array))
	{
		cout << "only 1\n";
	}
	else
	{
		cout << "Others\n";
	}
	if (two(array))
	{
		cout << "there is a 2\n";
	}
	else
	{
		cout << "there aren't any 2s\n";
	}

	_getch();
	return 0;
}