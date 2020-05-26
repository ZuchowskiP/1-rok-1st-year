#include <iostream>
#include <vector>
using namespace std;
//int numAssign() {
//   
//        int choice;
//        cout << endl << "Czy chcesz wrocic do poczatku?";
//        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
//        cin >> choice;
//        if (choice == 1) {
//            goto start;
//        }
//        if (choice == 2) {
//            return 0;
//        }
//    
//}
//int numAssign(int i, vector<float> a) {
//    cout << "Wpisz ilosc uzywanych liczb: ";
//    cin >> i;
//    a.resize(i);
//    cout << "Wpisz używane liczby: " << endl;
//    for (int y = 0; y < i; y++)
//    {
//        cout << y + 1 << ". liczba: ";
//        cin >> a[y];
//    }
//    return i;
//}




int main()
{
start:
    system("CLS");
    int i,mathType, choice;
    float res;
    cout << "Wybierz rodzaj rownania: " << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnożenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Potęga" << endl;
    cout << "6. Silnia" << endl;
    cout << "7. Średnia arytmetyczna" << endl;
    cout << "8. Wyjdz z programu" << endl;
    cin >> mathType;
    system("CLS");
    vector<float> num;
    switch (mathType)
    {
    case 1:
        cout << "Wpisz ilosc uzywanych liczb: ";
        cin >> i;
        num.resize(i);
        cout << "Wpisz używane liczby: " << endl;
            for (int y = 0; y < i; y++)
            {
                cout << y + 1 << ". liczba: ";
                cin >> num[y];
            }
        res = 0;
            for (int y = 0; y < i; y++)
            {
                res = num[y] + res;
            }
        system("CLS");
        cout << "Wynik dodawania to: " << res;
        cout << endl << "Czy chcesz wrocic do poczatku?";
        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
        cin >> choice;
            if (choice == 1) {
                goto start;
            }
            if (choice == 2) {
                return 0;
            }
    case 2:
        cout << "Wpisz ilosc uzywanych liczb: ";
        cin >> i;
        num.resize(i);
        cout << "Wpisz używane liczby, odejmowanie zacznie sie od pierwszej: " << endl;
            for (int y = 0; y < i; y++)
            {
                cout << y + 1 << ". liczba: ";
                cin >> num[y];
            }
        res = num[0];
            for (int y = 1; y < i; y++) 
            {
                res = res - num[y];
            }
        cout << "Wynik odejmowania to: " << res << endl;
        cout << endl << "Czy chcesz wrocic do poczatku?";
        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
        cin >> choice;
            if (choice == 1) {
                goto start;
            }
            if (choice == 2) {
                return 0;
            }
    case 3:
        cout << "Wpisz ilosc uzywanych liczb: ";
        cin >> i;
        num.resize(i);
        cout << "Wpisz liczby uzywane w mnozeniu: " << endl;
            for (int y = 0; y < i; y++)
            {
                cout << y + 1 << ". liczba: ";
                cin >> num[y];
            }
        res = num[0];
            for (int y = 1; y < i; y++)
            {
                res = res * num[y];
            }
        cout << "Wynik mnozenia to: " << res;
        cout << endl << "Czy chcesz wrocic do poczatku?";
        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
        cin >> choice;
            if (choice == 1) {
                goto start;
            }
            if (choice == 2) {
                return 0;
            }
    S4:
    case 4:
        cout << "Wpisz ilosc uzywanych liczb: ";
        cin >> i;
        num.resize(i);
        cout << "Wpisz ktora liczbe bedziesz dzielil przez ktore liczby: " << endl;
            for (int y = 0; y < i; y++)
            {
                cout << y + 1 << ". liczba: ";
                cin >> num[y];
                if (num[y] == 0) {
                    cout << "Nie mozna dzielic przez zero, wprowadz liczby ponownie." << endl;
                    goto S4;
                }
            }
        res = num[0];
            for (int y = 1; y < i; y++) 
            {
                res = res / num[y];
            }
        cout << "Wynik dzielenia to: " << res << endl;
        cout << endl << "Czy chcesz wrocic do poczatku?";
        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
        cin >> choice;
            if (choice == 1) {
                goto start;
            }
            if (choice == 2) {
                return 0;
            }
    case 5:
        cout << "Wpisz ilosc uzywanych liczb: ";
        cin >> i;
        num.resize(i);
        cout << "Wpisz ktora liczbe bedziesz potegowal przez ktora/ktore: " << endl;
            for (int y = 0; y < i; y++)
            {
                cout << y + 1 << ". liczba: ";
                cin >> num[y];
            }
        res = num[0];
            for (int y = 1; y < i; y++) 
            {
                res = pow(res, num[y]);
            }
            cout << "Wynik potegowania to: " << res;
            cout << endl << "Czy chcesz wrocic do poczatku?";
            cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
            cin >> choice;
                  if (choice == 1) {
                        goto start;
                  }
                  if (choice == 2) {
                      return 0;
                  }
    S6:
    case 6:
        num.resize(1);
        system("CLS");
        cout << "Wpisz liczbe ktorej silnia bedzie obliczana: ";
        cin >> num[0];
        if (num[0] < 0) {
            cout << "Nieobslugiwany format, wpisz liczbe calkowita, wieksza od zera." << endl;
            goto S6;
        }
        res = num[0];
            for (int y = 1; y < num[0]; y++) {
                res = res* y;
            }
        cout << "Silnia " << num[0] << " to: " << res;
        cout << "Wynik potegowania to: " << res;
        cout << endl << "Czy chcesz wrocic do poczatku?";
        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
        cin >> choice;
            if (choice == 1) {
                goto start;
            }
            if (choice == 2) {
                return 0;
            }
    case 7:
        cout << "Wpisz ilosc uzywanych liczb: ";
        cin >> i;
        num.resize(i);
        cout << "Wpisz liczby ktorych z ktorych chesz wyliczyc srednia arytemtyczna: " << endl;
            for (int y = 0; y < i; y++)
            {
                cout << y + 1 << ". liczba: ";
                cin >> num[y];
            }
        res = 0;
            for (int y = 0; y < i; y++)
            {
                res = num[y] + res;
            }
        cout << "Srednia arytmetyczna to: " << res / i;
        cout << endl << "Czy chcesz wrocic do poczatku?";
        cout << endl << "1. Tak" << endl << "2. Nie, zakoncz program" << endl;
        cin >> choice;
            if (choice == 1) {
                goto start;
            }
            if (choice == 2) {
                return 0;
            }
    case 8:
        return 0;
    default:
        cout << "Wybierz rodzaj rownania poprzez wpisanie liczb przypisanych do rownania." << endl;
        goto start;
    }
}
