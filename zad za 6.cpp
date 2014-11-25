//masiv ot klaviaturata
// mahni troikite i napravi nov masiv

#include<iostream>
using namespace std;
int main()
{
	int array[10] = { 0 };
	int new_array[10] = { 0 };
	int size_new = 0;
	int size = 10;
	int j = 0;
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < size; i++)
	{
		{
			if (array[i] != 3)
			{
				new_array[j] = array[i];
				j++;

			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (new_array[i] != 0)
		{
			 counter ++ ;
		}
	}

	for (int i = 0; i < counter; i++)
	{
			cout << new_array[i]<<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}