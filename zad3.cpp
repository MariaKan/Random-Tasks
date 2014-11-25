/*
   Ako cifrata e chetna  se dobavq 1, ako e nechetna se vadi 1.
   Novoto chislo se izvejda na ekrana.
*/

#include<iostream>
#include<cmath>
using namespace std;
int numbers(int number)
{
	int copy_num = number;
	int new_num = 0;
	int counter = 0;


	while (copy_num)
	{
		int last_digit = copy_num % 10;
		if (last_digit % 2 == 0)
		{
			last_digit += 1;
		}
		else
		{
			last_digit -= 1;
		}

		new_num = new_num + last_digit * pow((double)10, counter);
		counter++;
		copy_num /= 10;
	}

	return new_num;
}
int main()
{
	int number = 0;
	cin >> number;

	cout << numbers(number) << endl;

	system("pause");
	return 0;
}