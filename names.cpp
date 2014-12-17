#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>

using namespace std;

int main()
{
	char name[10];
	cin >> name;
	int len = strlen(name);
	

	if (name[len-1] == 'a')
	{
		cout << "female\n";

	}
	else
	{
		cout << "male\n";
	}
	_getch();
	return 0;
}