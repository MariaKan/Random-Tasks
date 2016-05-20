#include<iostream>
#include<cmath>
#include<stdio.h>
#include <iomanip>
using namespace std;
int main()
{
	double amount = 0, fee = 0, x = 0;
	cout << "Enter the amount the player withdraws (fee included): ";
	cin >> amount;

	x = 100 * amount / 105;
	fee = x * 5 / 100; 


	cout << "The fee is: " << setprecision(2) << fixed << fee << endl;

	system("pause");
	return 0;
}