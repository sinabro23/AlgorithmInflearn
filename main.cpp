#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int digit_sum(int x)
{
    int sum = 0;

    while (x > 0)
    {
      	sum += x%10;
		x=x/10;
    }

    return sum;
}

int main(int argc, char** argv) 
{
	//freopen("input.txt", "rt", stdin);
	int n, num, max = -2147000000, sum, res = 0;
	
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        
        sum = digit_sum(num);
        
        if (sum > max)
        {
        	max = sum;
            res = num;
        }
        else if (sum == max)
        {
            if (num > res)
            {
                res = num;
            }
        }
    }

    cout << res;
    return 0;
}
