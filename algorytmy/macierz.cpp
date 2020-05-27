#include<iostream>
using namespace std;
/* jak w poprzednim zadaniu, nie bylo wytycznych zeby uzytkownik sam wybieral co robic
wiec wszystko wykonuje sie pokolei
*/

int main() {
    int height, len, m, n;
    float mat[30][30], wynik;
przypisanie:
    cout << "Z ilu wieszy ma sie skladac " << endl;
    cin >> height;
    cout << "Z ilu kolumn ma sie skladac " << endl;
    cin >> len;
    if (height <= 0 || len <= 0) {
        cout << "Macierz nie moze miec jednego z wymiarow mniejszego/rownego 0" << endl;
        goto przypisanie;
    }
    m = 0;//wyzerowane zeby pasowalo do tablicy
    n = 0;
    do {
        do {
            cout << "Wpisz el z wiersza " << m + 1 << " i kolumny " << n + 1 << endl;
            cin >> mat[m][n];
            n = n + 1;
        } while (n != len);
        n = 0;
        m = m + 1;
    } while (m != height);
    m = 0;
    n = 0;
    do {
        do {
            cout << "El z wiersza " << m + 1 << " i kolumny " << n + 1 << " = " << mat[m][n] << endl;
            n = n + 1;
        } while (n != len);
        n = 0;
        m = m + 1;
    } while (m != height);
    n = 0;
    m = 0;
    wynik = 0;
    do {
        do {
            wynik = wynik + mat[m][n];
            n = n + 1;
        } while (n != len);
        n = 0;
        m = m + 1;
    } while (m != height);
    cout << "Suma wszystkich el = " << wynik << endl;
wybor:
    cout << "Ktory el macierzy pokazac" << endl << "wiersz =";
    cin >> m;
    cout << "kolumna = ";
    cin >> n;
    if (m > height || m <= 0 || n > len || n <= 0) {
        cout << "Podaj el z zakresu macierzy" << endl;
        cout << "Ilosc wierszy = " << height << endl;
        cout << "Ilosc kolumn = " << len << endl;
        goto wybor;
    }
    cout << "Wybrany el = " << mat[m - 1][n - 1];
    return 0;
}