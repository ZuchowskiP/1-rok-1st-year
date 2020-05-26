#include<iostream>

using namespace std;

int main()
{
    int n, i, fib[255], wynik;
    cin >> n;
    if (n <= 0) {
        cout << "Nieoblusiwany format, liczba mniejsza/rowna 0\n";
        return 0;
    }
    i = 3;
    fib[0] = 1;
    fib[1] = 1;
    if (n <= 2) {
        wynik = fib[n - 1];
        cout << wynik;
        return 0;

    }
    i = i - 1;//sciagniecie o 1 zeby tablica nie szalala
    n = n - 1;/*
    while (i != n) //probowalem to z whilem zrobic ale wychodzi mi poza tablice
    {
        fib[i] = fib[i - 2] + fib[i - 1];
        cout << fib[i] << endl;
        i++;
        
    }
    wynik = fib[i];
    cout << wynik;
    return 0;*/
    
    
    for (; i <= n; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
        cout << fib[i] << endl;
    }
    wynik = fib[i];
    cout << wynik;
    
}