#include<iostream>
using namespace std;
bool contains( int* blacklisted, int number)
{
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (number == blacklisted[j])
			{
				return true;
			}
			
		}
			return false;
	}
 
}
int main()
{
	int blacklisted[] = { 1, 3, 7, 13, 12, 47, 25 };
	int array[5] = { 0 };
	int size = 5;

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (!contains(blacklisted, array[i]))
		{
			cout << array[i] << " ";
		}
	}

	system("pause");
	return 0;
}