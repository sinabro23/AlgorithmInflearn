#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
int n = 0;
	cin >> n;

	int* A = new int[n];
	int* B = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (A[i] == B[i])
			cout << 'D' << endl;
		else if (A[i] == 1 && B[i] == 2)
			cout << "B" << endl;
		else if (A[i] == 1 && B[i] == 3)
			cout << "A" << endl;
		else if (A[i] == 2 && B[i] == 1)
			cout << "A" << endl;
		else if (A[i] == 2 && B[i] == 3)
			cout << "B" << endl;
		else if (A[i] == 3 && B[i] == 1)
			cout << "B" << endl;
		else if (A[i] == 3 && B[i] == 2)
			cout << "A" << endl;
	}

	delete[] A;
	delete[] B;
	return 0;
}
