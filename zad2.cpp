/*
3 numbers .. sum = 30
A1 -5 = (a2 +5)/3 = a3/2
*/

#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0;
	int sum = 30;
<<<<<<< HEAD

=======
	
>>>>>>> origin/master

	for (int i = -100; i <= 100; i++)
	{

		for (int j = 100; j >= -100; j--)
		{

<<<<<<< HEAD
			if ((i + 5 == (j + 5) / 3 && i + 5 == (sum - i - j) / 2));
			{
				cout << i << " " << j << " " << sum - i - j << endl;
=======
			if ((i + 5 == (j + 5) / 3 && i + 5 == (sum - i - j)/2));
			{
					cout << i << " " << j << " " << sum - i - j << endl;
>>>>>>> origin/master
			}
		}
	}
	system("pause");
	return 0;
}
