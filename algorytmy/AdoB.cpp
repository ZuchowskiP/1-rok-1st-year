#include<iostream>

using namespace std;
int main() {
    int a, b, len, tab[255], i, choice;
    float wynik;
start:
    cout << "Wprowadz liczbe a:" << endl;
    cin >> a;
    cout << "Wprowadz liczbe b:" << endl;
    cin >> b;
    if (a < 0 || b < 0) {
        cout << "Prosze wprowadzic liczbe wieksza/rowna 0" << endl;
        goto start;

    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    len = (b - a) + 1;
    tab[0] = a;
    i = 1; // zmniejszenie zeby pasowalo do tablicy
    if (a == b) {
        goto obliczenia;
    }
    while (i != len) // zamiast len + 1 
    {
        tab[i] = tab[i - 1] + 1;
        i = i + 1;
    }
obliczenia:
    choice = 0;
    wynik = 0;
    cout << "Wybierz opcje" << endl;
    cout << "1 Suma kolejnych el." << endl;
    cout << "2 Suma kwadratow kolejnych el." << endl;
    cout << "3 Srednia arytmetyczna" << endl;
    cout << "4 Koniec programu" << endl;
    cin >> choice;
    switch (choice) {
    case(1):
        i = 0;
        do {
            wynik = wynik + tab[i];
            i++;
        } while (i != len);
        cout << "Wynik rowania:" << wynik << endl;
        goto obliczenia;

    case(2):
        i = 0;
        do {
            wynik = wynik + pow(tab[i], 2);
            i++;
        } while (i != len);
        cout << "Wynik rowania:" << wynik << endl;
        goto obliczenia;
    case(3):
        i = 0;
        do {
            wynik = wynik + tab[i];
            i++;

        } while (i != len);
        wynik = wynik / len;
        cout << "Wynik rowania:" << wynik << endl;
        goto obliczenia;
    case(4):
        return 0;
    default:
        cout << "Prosze wybrac jedna z podanych opcji" << endl;
        goto obliczenia;

    }


}