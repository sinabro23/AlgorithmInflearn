#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;

	int pre = 0, now = 0, max = 0, count = 1;

	cin >> pre;

	for (int i = 1; i < n; i++)
	{
		cin >> now;

		if (now >= pre)
		{
			count++;
			if (count > max)
				max = count;
		}
		else
			count = 1;

		pre = now;
	}


	cout << max;


	return 0;		
}
