#include<iostream>
using namespace std;

int digit_sum(int x)
{
	int sum = 0;
	
	while(x > 0)
	{
		sum += x % 10;
		x /= 10;	
	}
	
	return sum;
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	int maxSum = -2147000000, maxNum = -2147000000;
	int cnt = 0; 
	cin>>cnt;
	
	for(int i = 0; i< cnt; i++)
	{
		int number = 0;
		cin >> number;
		
		if(digit_sum(number) > maxSum)
		{
			maxNum = number;
			maxSum = digit_sum(number);
		}
			
		else if(digit_sum(number) == maxSum)
		{
			if(number > maxNum)
				maxNum = number;
		}
		
	
	}
	
		cout<< maxNum;
	
	return 0;
}
