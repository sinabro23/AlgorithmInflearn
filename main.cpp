#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int digit_sum(int x)
{
	int ret = 0;

	while (x != 0)
	{
		ret += x % 10;
		x /= 10;
	}

	return ret;
}

int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int N, num = 0, max = -2147000000, sum = 0, maxNum = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;

		if (digit_sum(num) > max)
		{
			max = digit_sum(num);
			maxNum = num;
		}

		else if(digit_sum(num) == max)
		{
			if (num > maxNum)
			{
				maxNum = num;
			}
		}

	}

	cout << maxNum;

	return 0;
}
