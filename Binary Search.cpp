#include<iostream>
using namespace std;
int main()
{
	int array[] = { 2, 6, 13, 21, 36, 47, 63, 81, 97 };
	int size = 9;
	int start = 0;
	int end = size - 1;
	int x = 81; // The one we are looking for
	int result = -1;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (array[mid] == x)
		{
			result = mid;
			break;
		}
		else if (array[mid] < x)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	
	cout << result;



	system("pause");
	return 0;
}