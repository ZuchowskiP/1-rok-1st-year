#include<iostream>

using namespace std;

int main()
{  
    int a, i, res;
    i = 0;
    res = 1;
    cin >> a;
    for(;i<a;i++)
    {
        res = res + (res*i);
    }
    cout << res;

}