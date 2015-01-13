#include<iostream>
#include<conio.h>

using namespace std;
int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n > 0)
	{
		return n*fact(n - 1);
	}
}
int fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	else 
	{
		return fib(n - 1) + fib(n - 2);
	}

}
int main()
{
	int n = 0;
	cin >> n;

	cout << fact(n) << endl;
	cout << fib(n);

	_getch();
	return 0;
}