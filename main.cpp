#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int cnt[50001] = { 0 };
	int N = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j <= N; j = j + i)
		{
			cnt[j]++;
		}
	}

	cout << cnt[1]; 

	for (int i = 2; i <= N; i++)
	{
		cout << ' ' << cnt[i];
	}

	return 0;
}
