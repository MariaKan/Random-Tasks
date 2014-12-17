#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include <cctype>

using namespace std;

int main()
{
	char sentence[1000];
	cin.getline(sentence, 1000);
	int len = strlen(sentence);

	if (sentence[0] > 97 && sentence[0] < 122)
	{
			sentence[0] = toupper(sentence[0]);
	}

	for (int i = 0; i < len - 1; i++)
	{
		if (sentence[i] == ' ')
		{
			if (sentence[i + 1] > 97 && sentence[i + 1] < 122)
			{
				sentence[i + 1] = toupper(sentence[i + 1]);
			}
		}
	}

	cout << sentence;
	_getch();
	return 0;
}