#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(50);

    for (auto i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter;
    iter = adjacent_find(v.begin(), v.end());

    if (iter != v.end())
        cout << *iter << " ";
    cout << endl;
   

    return 0;
        

}

