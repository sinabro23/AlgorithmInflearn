#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int reverse(int x)
{
	int res = 0, temp = 0;
	while (x > 0)
	{
		temp = x % 10;
		res = res * 10 + temp;
		x /= 10;
	}

	return res;
}

bool isPrime(int x)
{
	if (x == 1)
		return false;
	
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return false;
	}

	return true;
}


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n = 0;
	cin >> n;

	int num = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		num = reverse(num);
		if (isPrime(num))
			cout << num << ' ';
	}

	return 0;
}
