#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n)
{
    return 35 < n;
}

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter;
    iter = find(v.begin(), v.end(), 20);
    if (iter != v.end())
        cout << *iter << "을(를) 찾았습니다" << endl;

    iter = find_if(v.begin(), v.end(), Pred);
    if (iter != v.end())
        cout << "35 보다 큰 첫 번째 원소 : " << *iter << endl;
 



 
        

}

