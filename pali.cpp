//This should find all n-digit palindromes
//that can be divided by p


#include<iostream>
#include<conio.h>
using namespace std;
int reverse(int number)
{
	int reverse = 0;
	while (number)
	{
		reverse *= 10;
		reverse += number % 10;
		number /= 10;
	}

	return reverse;
}
bool is_pali(int number)
{
	if (number == reverse(number))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n = 0;
	cin >> n;
	int p = 0;
	cin >> p;

	long long int num = 0;
	int n_copy = n;
	
	while (n_copy)
	{
		num *= 10;
		num += 9;
		n_copy--;
	}
	

	n_copy = n - 1;
	long long int limit = 1;

	while (n_copy)
	{
		limit *= 10;
		n_copy--;
	}
	
	int sum = 0;

	for (int i = limit; i <= num; i++)
	{
		if (i % p == 0 && is_pali(i))
		{
			sum++;
		}
	}

	cout <<endl << "The numbers' number is: " << sum << endl;


	_getch();
	return 0;
}