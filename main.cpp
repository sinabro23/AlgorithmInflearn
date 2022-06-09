#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n = 0, m = 0;
	cin >> n >> m;
	
	int current = 0, max = -2147000000, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> current;
		if (current > m)
		{
			cnt++;
			if (cnt > max)
				max = cnt;
		}
		else
			cnt = 0;
			
	}

	cout << max;

	return 0;
}
