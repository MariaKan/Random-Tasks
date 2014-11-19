#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int array[] = { 115, 109, 200, 8, 1, -100, 15 };
	int size = 7;

	// Selection Sort

	for (int i = 0; i < size - 1; i++)
	{
		int min_element_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (array[min_element_index]>array[j])
			{
				min_element_index = j;
			}
		}
		if (min_element_index != i)
		{
			int current = array[min_element_index];
			array[min_element_index] = array[i];
			array[i] = current;
		}
	}

	


	// Bubble Sort

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] < array[i])
			{
				swap(array[i], array[j]);
			}
		}
			
	}
	
	
	
	// Insertion Sort

	for (int i = 1; i < size; i++)
	{
		int value = array[i];
		int j = i;
		while (j>0 && array[j - 1] > value)
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = value;
	}
	
	
	

	return 0;
}