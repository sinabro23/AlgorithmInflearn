#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n = 0;
	cin >> n;

	int* height = new int[n];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> height[i];
	}

	int max = height[n - 1];
	for (int i = n - 1; i >= 0; i--)
	{
		if (height[i] > max)
		{
			max = height[i];
			count++;
		}
	}

	cout << count;	

	delete[] height;
	return 0;
}
