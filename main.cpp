#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int N = 0;
	cin >> N;

	int num = 0, sum = 0;

	for (int i = 1; i <= N; i++)
	{
		num = i;
		while (num >0)
		{
			sum++;
			num /= 10;
		}
	}

	cout << sum;

	return 0;
}
