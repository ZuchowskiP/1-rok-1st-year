#include<iostream>

using namespace std;

int main(){
    int WYN, POD;
    double SG, LG, TYG, BRUTTO, NETTO, podatek;
    string stopa;
    cout << "Podaj stawke godzinowa" << endl;
    cin >> SG;
    cout << "Podaj ilosc przepracowanych godzin" << endl;
    cin >> LG;
    if(LG > 40){
        TYG = ((LG-40) * (SG*2) + 40 *SG);
    }
    else{
        TYG = LG * SG;
    } 
    cout << "Czy obliczac roczne wynagrodzenie? 1 = TAK 0 = NIE" << endl;
    cin >> WYN;
    if(WYN == 0){
        cout << "Tygodniowe wynagrodzenie to: " << TYG;
        return 0;

    }
    BRUTTO = TYG * 52;
    cout << "Czy obliczac podatek i rodzielic place na BRUTTO, NETTO?" << endl;
    cin >> POD;
    if(POD == 0){
        cout << "Roczne wynagrodzzenie BRUTTO to:" << BRUTTO;
        return 0;
    }
    if(BRUTTO <= 20000){
        podatek = BRUTTO * 0.19;
        stopa = "19%";


    }
    if(BRUTTO <= 30000){
        podatek = 20000 * 0.19 + (BRUTTO - 20000) * 0.21;
        stopa = "21%";

    }
    else{
        podatek = 20000 * 0.19 +  10000 * 0.21 + (BRUTTO - 30000) * 0.28;
        stopa = "28%";
    }
    NETTO = BRUTTO - podatek;
    cout << "Roczny zarobek BRUTTO: " << BRUTTO << endl;
    cout << "NETTO: " << NETTO << endl;
    cout << "Odciagniety podatek: " << podatek << endl;
    cout << "Stopa podatkowa: " << stopa << endl;
    return 0; 

}