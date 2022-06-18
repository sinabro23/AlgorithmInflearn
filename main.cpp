#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n = 0;
	cin >> n;

	vector<int> v(n, 0);
	int pre = 0, now = 0;

	cin >> pre;

	for (int i = 1; i < n; i++)
	{
		cin >> now;
		int index = abs(now - pre);
		if (index >= 0 && index < n && v[index] == 0)
			v[index]++;
		else
		{
			cout << "NO";
			return 0;
		}
		pre = now;
	}

	cout << "YES";

	return 0;
}
