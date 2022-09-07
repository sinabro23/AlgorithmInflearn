#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//freopen("input.txt", "rt", stdin);
	int n;
	cin>> n;
	
	int before;
	cin >> before;
	int number = 0, max = 1, cnt = 1;
	for(int i = 1; i < n; i++)
	{	
		cin >> number;
		if(number >= before)
		{
			cnt++;
			if(cnt > max)
			{
				max = cnt;
			}
		}	
		else
		{
			cnt = 1;
		}
		
		before = number;
	}
	
	cout <<max;

	return 0;	
}
