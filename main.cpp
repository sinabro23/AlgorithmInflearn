#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n, k, sum = 0, max = 0;
	cin >> n >> k;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < k; i++)
	{
		sum += v[i];
	}

	max = sum;

	for (int i = k; i < n; i++)
	{
		sum = sum + (v[i] - v[i - k]);
		if (sum > max)
			max = sum;
	}

	cout << max;	

	return 0;
}
