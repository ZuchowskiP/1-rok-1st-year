#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    if(a <=0 || b<=0){
        cout << "Wartosc mniejsza lub rowna 0, brak NWD" << endl;
        return 0;
    }
    while(a!=b){
        while(a>b){
            a=a-b;
        }
        while(b>a){
            b=b-a;
        }
    }
    cout << "NWD to: " << a;
    return 0;

}