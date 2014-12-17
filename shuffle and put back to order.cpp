#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

void swapp(char& a, char& b)
{
	int temp = a;
	a = b;
	b = temp;
}
char* randomize(char arr[], int n)
{
	srand(time(NULL));

	
	for (int i = n - 1; i > 0; i--)
	{
		
		int j = rand() % (i + 1);

		swapp(arr[i], arr[j]);
	}
	return arr;
}

int main()
{
	char word[1000];
	cin >> word;
	char word_cpy[1001];

	for (int i = 0; i < strlen(word); i++)
	{
		word_cpy[i] = word[i];
	}

	int n = strlen(word);

	randomize(word, n);
	cout << word<< endl;

	for (int i = 0; i < n; i++)
	{
		while (word_cpy[i] != word[i])
		{
			randomize(word, n);
		}

	}
	cout << word<<endl;

	_getch();
	return 0;
}