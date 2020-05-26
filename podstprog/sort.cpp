#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int length, greaterT, sortSpot, maxRepeats = 0;
    //int reps = 0, realNumS = 0;
    cout << "Z ilu liczb bedziesz korzystal?" << endl;
    cin >> length;
    vector<float> num(length);
    vector<float> sort(length);
    int realL = length - 1;
    cout << "Wpisz uzywane liczby: " << endl;
    for (int y = 0; y < length; y++)
    {
        cout << y + 1 << ". liczba: ";
        cin >> num[y];
    }
    for (int y = 0; y <= realL; y++) {
        greaterT = 0;
        for (int i = 0; i <= realL; i++) 
        {
            if (num[y] > num[i]) 
            {
                ++greaterT; // zliczanie od ilu liczb liczba y jest wieksza
            }
        }
        for (int x = 0; x <= realL; ++x) {
            if (sort[x] == num[y]) // sprawdzanie czy powtarza sie z nastepnym miejscem jesli tak:
            {
                sort[greaterT++] = num[y]; //przypisz liczbe do nastepnego miejsca w tablicy
            }
        }
        sort[greaterT] = num[y]; // przypisywanie liczby y do miejsca w tablicy sort zaleznego od ilu liczb byla wieksza w tablicy num

    }
    num.resize(0);
    cout << "Wartosc najmniejsza to: " << sort[0] << endl;
    cout << "Wartosc najwieksza to: " << sort[realL] << endl;
    cout << "Liczby posortowane w kolejnosci do najmniejszej do najwiekszej: ";
    for (int y = 0; y <= realL; y++) {
        cout << " " << sort[y] << " ";
    }
    cout << endl << "Liczby posortowane w kolejnosci od najwiekszej do najwiekszej: ";
    for (int y = realL; y >= 0; y--) {
        cout << " " << sort[y] << " ";
    }
    cout << endl << "Mediana to: ";
    if (length % 2 == 0)
        cout << (sort[realL / 2] + sort[(realL / 2) + 1]) / 2;
    else
        cout << sort[realL / 2];
    for (int y = 0; y <= realL; y++) 
    {
        int repeats = 0;
        for (int i = 0; i <= realL; i++) 
        {
            if (sort[y] == sort[i])
                repeats++; // ile razy sie powtarza
                //reps = repeats;
        }     
        if (repeats > maxRepeats) 
        {
            maxRepeats = repeats; // zmiana maksymalnej ilosci powtorzen
            sortSpot = y; // przypisanie indeksu najczesciej wystepujacej liczby
        }
        //if (reps == repeats && reps != 0) {
        //    realNumS++;
        //}
        //num.resize(realNumS);
        //num[realNumS - 1] = sort[y];
    }
    cout << endl << "Moda to: " << sort[sortSpot];
}