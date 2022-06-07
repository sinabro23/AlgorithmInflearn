#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
string str;
	cin >> str;

	int a[70] = { 0 };
	int b[70] = { 0 };

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			a[str[i] - 64]++;
		}
		else
		{
			a[str[i] - 96]++;
		}
	}

	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			b[str[i] - 64]++;
		}
		else
		{
			b[str[i] - 96]++;
		}
	}

	for (int i = 1; i <= 52; i++)
	{
		if (a[i] != b[i])
		{
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";

	return 0;
}
