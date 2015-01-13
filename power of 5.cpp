#include<iostream>
#include<conio.h>
using namespace std;
bool power_five(int n)
{
	if (n == 5)
	{
		return true;
	}
	if (n % 5 != 0 || n == 0)
	{
		return false;
	}
	else
	{
		return power_five(n / 5);
	}
}
int main()
{
	int n = 0;
	cin >> n;

	if (power_five(n))
	{
		cout << "Is power of 5";
	}
	else
	{
		cout << "Is not power of 5";
	}

	_getch();
	return 0;
}