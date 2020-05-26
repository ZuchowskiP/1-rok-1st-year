#include<iostream>

using namespace std;

int main()
{
    int a, res;
    cin >> a;
    res = a;
    if(a == 0){
        res = 1;
    }
    while(a>1){
        a = a-1;
        res = res*a;
    }
    cout << res;
    return 0;
}