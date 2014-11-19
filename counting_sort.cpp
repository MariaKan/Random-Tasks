#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int array[100] = { 0 };
	int size = 100;
	int counting_sort[100] = { 0 };

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < size; i++)
	{
		counting_sort[array[i]] += 1;
	}

	for (int i = 0; i < size + 1; i++)
	{
		for (int j = 0; j < counting_sort[i]; j++)
		{
			if (counting_sort[i] != 0)
			{
				cout << i << " ";
			}
		}
	}





	system("pause");
	return 0;
}