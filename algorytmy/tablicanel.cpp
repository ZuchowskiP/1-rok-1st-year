#include<iostream>
using namespace std;
int main() {
    int len;
    int i = 0; //zeby pasowalo do tablic
    float tab[255], wynik;
    //probowalem zrobic dim tab[len] w bloczkach ale wyskakiwalo ze potrzebuje wartosci calkowitej
    //wiec zrobilem tak jak tu
    //w zadaniu nie bylo napisane ze uzytkownik ma wybierac co algorytm/program robi
    //wiec wszystko sie wykonuje po kolei
    //inaczej algorytm i program wygladalyby bardzo podobnie do tego z zad 5
tablica:
    cout << "Ilu elementowa ma byc tablica" << endl;
    cin >> len;
    if (len <= 0) {
        cout << "Tablica musi byc przynajmniej 1 el" << endl;
        goto tablica;
    }
    do {
        cout << "Wpisz el" << endl;
        cin >> tab[i];
        i = i + 1;
    } while (i != len);//len zamiast len +1 zeby zgadzalo sie w tablicy
    cout << "Pierwszy el = " << tab[0] << endl;
    i = 0;
    cout << "Wypisanie tablicy" << endl;
    do {
        cout << tab[i] << endl;
        i = i + 1;
    } while (i != len);
    wynik = tab[len - 1] - tab[0]; // len -1 zeby zgadzoalo sie w tablicy
    cout << "Roznica miedzy ostatnim i 1 elementem = " << wynik << endl;
    i = 0;
    wynik = 0;
    do {
        wynik = wynik + tab[i];
        i = i + 1;
    } while (i != len);
    cout << "Suma wszystkich el = " << wynik << endl;
    wyswietlenie:
        cout << "Ktory el tablicy wyswietlic?" << endl;
        cin >> i;
        if (i <= 0 || i > len) {
            cout << "Podaj ktory el z zakresu tablicy podac" << endl;
            cout << "Dlugosc tablicy: " << len << endl;
            goto wyswietlenie;

        }
        cout << tab[i - 1] << endl; // i-1 zeby pasowalo do tablicy
        return 0;

}