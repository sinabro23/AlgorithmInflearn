#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
int n = 0;
	cin >> n;

	bool* flag = new bool[n];

	int num = 0, answer = 0, temp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cin >> answer;
		
		if (((num * (num + 1)) / 2) == answer)
			flag[i] = true;
		else
			flag[i] = false;
	}

	for (int i = 0; i < n; i++)
	{
		if (flag[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	delete[] flag;

	return 0;
}
