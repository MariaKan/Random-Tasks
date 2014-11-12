# include <iostream>
using namespace std;
int main()
{
	int array[10] = { 0 };
	int size = 10;
	int sequence = 0;
	int longest_sequence = 0;
	int counter = 1;
	int longest_counter = 1;


	for (int i = 0; i < size; i++)
	{
		cin >> array[i];

	}

	for (int i = 1; i < size; i++)
	{
		if (array[i - 1] == array[i])
		{
			sequence = array[i];
			counter++;
		}
		if (longest_counter < counter)
		{
			longest_counter = counter;
			longest_sequence = sequence;
		}
		else
		{
			counter = 1;
		}
	}

	for (int i = 0; i < longest_counter; i++)
	{
		cout << longest_sequence << " ";
	}


	
	system("pause");
	return 0;
}