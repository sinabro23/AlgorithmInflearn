#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
int totalA = 0, totalB = 0;
	int lastWinner = 0; // 1¿Ã∏È A, 2∏È B

	int A[10] = { 0 };
	int B[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (A[i] == B[i])
		{
			totalA += 1;
			totalB += 1;
		}
		else if (A[i] > B[i])
		{
			totalA += 3;
			lastWinner = 1;
		}
		else
		{
			totalB += 3;
			lastWinner = 2;
		}
	}

	cout << totalA << ' ' << totalB << endl;

	if (totalA > totalB)
		cout << "A";
	else if (totalB > totalA)
		cout << "B";
	else
	{
		if (lastWinner == 1)
			cout << "A";
		else if (lastWinner == 2)
			cout << "B";
		else if (lastWinner == 0)
			cout << "D";
	}


	return 0;
}
