#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	string str;
	cin >> str;

	int cnt[10] = { 0 };
	int max = -2147000000, maxIndex = -1;

	for (int i = 0; i < str.size(); i++)
	{
		int index = str[i] - '0';
		cnt[index]++;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (cnt[i] >= max)
		{
			max = cnt[i];
			maxIndex = i;
		}
	}

	cout << maxIndex;
	


	return 0;
}
