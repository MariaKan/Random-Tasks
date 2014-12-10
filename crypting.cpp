#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void encrypt(int key, char* text)
{
	int size = strlen(text);
	for (int i = 0; i < size; i++)
	{
		text[i] += key;
	}
}
void decrypt(int key, char* text)
{
	int size = strlen(text);
	for (int i = 0; i < size; i++)
	{
		text[i] -= key;
	}
}
int main()

{
	char text[8];
	int size = 7;
	int key = 0;
	cin >> key;
	for (int i = 0; i < size; i++)
	{
		cin >> text[i];
	}

	encrypt(key, text);
	for (int i = 0; i < size; i++)
	{
		cout << text[i];
	}
	cout << endl;
	decrypt(key, text);
	for (int i = 0; i < size; i++)
	{
		cout << text[i];
	}
	cout << endl;
	system("pause");
	return 0;
}