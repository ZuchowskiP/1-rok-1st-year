import math
a = float(input('Wprowadz liczbe a = '))
b = float(input('Wprowadz liczbe b = '))
c = float(input('Podaj zmienna c = '))
if c > 0:
    wynik = pow(a,2) + b
    print(f'Wynik rownania: {wynik}')
if c < 0:
    wynik = a - pow(b,2)
    print(f'Wynik rownania: {wynik}')
if c == 0:
    pod = a - b
    if pod == 0:
         print('Podane wartosci nie moga byc obsluzone, wychodziloby dzielenie przez zero')
    else:
        wynik = 1/pod
        print(f'Wynik rownania: {wynik}')