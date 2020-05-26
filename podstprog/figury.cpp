#include <iostream>
#define Pi 3.14;
using namespace std;

int main()
{
    start:
    int types;
    cout << "Wybierz rodzaj figur:" << endl;
    cout << "1. Plaskie" << endl;
    cout << "2. Przestrzenne" << endl;
    cin >> types;
        system("CLS");
        switch (types) 
        {
            s1:
            case 1:
                int figure;
                cout << "Wybierz figure:" << endl;
                    cout << "1. Okrag" << endl;
                    cout << "2. Kwadrat" << endl;
                    cout << "3. Prostokat" << endl;
                    cout << "4. Trojkat" << endl;
                    cout << "5. Trapez" << endl;
                    cout << "6. Romb" << endl;
                    cin >> figure;
                    system("CLS");
                        switch (figure) 
                        {
                            case 1:
                               float r;
                               cout << "Wpisz promien okregu:";
                               cin >> r;
                               cout << endl;
                               cout << "Pole kola to: " << (pow(r, 2)) * Pi;
                               cout << endl;
                               cout << "Dlugosc okregu: " << 2 * r * Pi;
                               break;
                            case 2:
                                float sLength;
                                cout << "Wpisz dlugosc boku: ";
                                cin >> sLength;
                                cout << endl;
                                cout << "Pole kwadratu to: " << sLength * sLength;
                                cout << endl;
                                cout << "Obwod kwadratu to : " << sLength * 4;
                                break;
                            case 3:
                                float shLength, lLength;
                                cout << "Wpisz dlugosc piewrszego boku: ";
                                cin >> lLength;
                                cout << "Wpisz dlugosc drugiego boku: ";
                                cin >> shLength;
                                cout << "Pole prostokata to : " << lLength * shLength;
                                cout << endl << "Obwod prostokata to : " << 2 * shLength + 2 * lLength;
                                break;
                            case 4:
                                float base, height, l1, l2;
                                cout << "Wpisz dlugosc podstawy trojkata: ";
                                cin >> base;
                                cout << "Wpisz wysokosc trojkata: ";
                                cin >> height;
                                cout << "Wpisz dlugosc 2 boku: ";
                                cin >> l1;
                                cout << "Wpisz dlugosc 3 boku: ";
                                cin >> l2;
                                cout << "Pole trojkata to: " << (base * height)/2;
                                cout << endl << "Obwod trojkata to: " << base + l1 + l2;
                                break;
                            case 5:
                                float top;
                                cout << "Wpisz dlugosc podstawy: ";
                                cin >> base;
                                cout << "Wpisz wysokosc: ";
                                cin >> height;
                                cout << "Wpisz dlugosc 2 podsawy: ";
                                cin >> top;
                                cout << "Wpisz dlugosc pozostalego 1 boku: ";
                                cin >> l1;
                                cout << "Wpisz dlugosc pozostalego boku: ";
                                cin >> l2;
                                cout << "Pole trapezu to: " << ((base + top) / 2) * height;
                                cout << endl << "Obwod trapeza to: " << base + top + l1 + l2;
                                break;
                            case 6:
                                cout << "Wpisz dlugosc boku: ";
                                cin >> sLength;
                                cout << "Wpisz wysokosc: ";
                                cin >> height;
                                cout << "Pole rombu to: " << sLength * height;
                                cout << endl << "Obwod rombu to: " << 4 * sLength;
                                break;
                            default:
                                cout << "Nieoblusgiwany format, wybierz z podanych numerow." << endl;
                                goto s1;
                        }
                        break;
            s2:
            case 2:
                cout << "Wybierz figure: " << endl;
                cout << "1. Czworoscian foremny" << endl;
                cout << "2. Ostroslup czworokatny" << endl;
                cout << "3. Szescian" << endl;
                cout << "4. Graniastoslup trojkatny" << endl;
                cout << "5. Walec" << endl;
                cout << "6. Stozek" << endl;
                cout << "7. Kula" << endl;
                cin >> figure;
                system("CLS");
                switch (figure) 
                    {
                        case 1:
                            float baseLength, baseArea, sideArea, height;
                            cout << "Wpisz dlugosc boku: ";
                            cin >> baseLength;
                            cout << "Wpisz wysokosc: ";
                            cin >> height;
                            baseArea = baseLength * baseLength;
                            cout << "Pole podstawy to: " << baseArea;
                            sideArea = (baseLength * height) * 4;
                            cout << endl << "Pole powierzni bocznej to: " << sideArea;
                            cout << endl << "Pole calkowite to: " << (2 * baseArea) + sideArea;
                            cout << endl << "Objetosc czworoscianu to: " << baseArea * height;
                            cout << endl;
                            break;
                        case 2:
                            float sideLength, baseLength1, baseLength2, baseLength3, baseLength4, baseHeight, sideHeight1;
                            float sideHeight2, sideHeight3, sideHeight4;
                            float sideArea1, sideArea2, sideArea3, sideArea4;
                            //baseLength1 = podstawa trapezu 1, baseLength2 = podstawa trapezu 2
                            cout << "Wpisz dlugosc 1 podstawy trapezu: ";
                            cin >> baseLength1;
                            cout << "Wpisz dlugosc 2 boku trapezu: ";
                            cin >> baseLength2;
                            cout << "Wpisz dlugosc 3 boku trapezu: ";
                            cin >> baseLength3;
                            cout << "Wpisz dlugosc 4 boku trapezu: ";
                            cin >> baseLength4;
                            cout << "Wpisz wysokosc podstawy(od podstawy 1): ";
                            cin >> baseHeight;
                            cout << "Wpisz wysokosc ostroslupa: ";
                            cin >> height;
                            cout << "Wpisz wysokosc pierwszego trojkata (podstawa bok 1): ";
                            cin >> sideHeight1;
                            sideArea1 = (baseLength1 * sideHeight1) / 2;
                            cout << "Wpisz wysokosc drugiego trojkata (podstawa bok 2): ";
                            cin >> sideHeight2;
                            sideArea2 = (sideHeight2 * baseLength2) / 2;
                            cout << "Wpisz wysokosc trzeciego trojkata (podstawa bok 3): ";
                            cin >> sideHeight3;
                            sideArea3 = (sideHeight3 * baseLength3) / 2;
                            cout << "Wpisz wysokosc czwartego trojkata (podstawa bok 4): ";
                            cin >> sideHeight4;
                            sideArea4 = (sideHeight4 * baseLength4) / 2;
                            baseArea = ((baseLength1 + baseLength3) / 2) * height;
                            sideArea = sideArea1 + sideArea2 + sideArea3 + sideArea4;
                            cout << "Pole podstawy to: " << baseArea;
                            cout << endl << "Pole powierzchni bocznej to: " << sideArea;
                            cout << endl << "Pole calkowite to: " << baseArea + sideArea;
                            cout << endl << "Objetosc to: " << (baseArea / 3) * height;
                            break;
                        case 3:
                            cout << "Wpisz dlugosc boku: ";
                            cin >> baseLength;
                            baseArea = pow(baseLength, 2);
                            cout << "Pole podstawy to: " << baseArea;
                            sideArea = 4 * baseArea;
                            cout << endl << "Pole powierzchi bocznej to: " << sideArea;
                            cout << endl << "Pole calkowite to: " << (2 * baseArea) + sideArea;
                            cout << endl << "Objetosc to: " << pow(baseLength, 3);
                            break;
                        case 4:
                            cout << "Wpisz dlugosc pierwszego boku podstawy: ";
                            cin >> baseLength1;
                            cout << "Wpisz dlugosc drugiego boku podstawy: ";
                            cin >> baseLength2;
                            cout << "Wpisz dlugosc trzeciego boku podstawy: ";
                            cin >> baseLength3;
                            cout << "Wpisz wysokosc podstawy (od boku pierwszego): ";
                            cin >> baseHeight;
                            cout << "Wpisz wysokosc graniastoslupa: ";
                            cin >> height;
                            baseArea = (baseLength1 * baseHeight) / 2;
                            sideArea1 = baseLength1 * height;
                            sideArea2 = baseLength2 * height;
                            sideArea3 = baseLength3 * height;
                            sideArea = sideArea1 + sideArea2 + sideArea3;
                            cout << "Pole podstawy to: " << baseArea;
                            cout << endl << "Pole powierzchni bocznej: " << sideArea;
                            cout << endl << "Pole calkowite to: " << sideArea + (2 * baseArea);
                            cout << endl << "Objetosc to: " << baseArea * height;
                            break;
                        case 5:
                            float r;
                            cout << "Wpisz promien podstawy: ";
                            cin >> r;
                            cout << "Wpisz wysokosc walca: ";
                            cin >> height;
                            baseArea = (pow(r, 2)) * Pi;
                            sideArea = 2 * r * height * Pi;
                            cout << "Pole podstawy to: " << baseArea;
                            cout << endl << "Pole powierzchni bocznej to: " << sideArea;
                            cout << endl << "Pole calkowite walca to: " << (2 * baseArea) + sideArea;
                            cout << endl << "Objetosc walca to: " << (pow(r, 2)) * height * Pi;
                            break;
                        case 6:
                            float l; // l = tworzaca stozka
                            cout << "Wpisz promien podstawy: ";
                            cin >> r;
                            cout << "Wpisz tworzaca stozka: ";
                            cin >> l;
                            cout << "Wpisz wysokosc stozka: ";
                            cin >> height;
                            baseArea = (pow(r, 2)) * Pi;
                            sideArea = r * l * Pi;
                            cout << "Pole podstawy stozka to: " << baseArea;
                            cout << endl << "Pole powierzchni bocznej to: " << sideArea;
                            cout << endl << "Objetosc stozka to: " << ((pow(r, 2)) * height) / 3 * Pi;
                            break;
                        case 7:
                            cout << "Wpisz promien kuli: ";
                            cin >> r;
                            cout << "Powierzchnia kuli to: " << 4 * (pow(r, 2)) * Pi;
                            cout << endl << "Objetosc kuli to: " << 4 / 3 * (pow(r, 3)) * Pi;
                            break;
                        default:
                            cout << "Nieoblusgiwany format, wybierz z podanych numerow." << endl;
                            goto s2;
                    }
                break;           
        default:
            cout << "Wybierz pomiedzy 1 lub 2." << endl;
            goto start;

        }
}
