import math

while True:
    print('1)Pole prostokata\n'
    '2)Pole trojkata\n'
    '3)Pole kola\n'
    '4)Choinka\n'
    '5)Exit\n')
    try:
        choice = int(input('Twoj wybor: '))
        if choice == 1:
            while True:
                try:
                    print('podaj boki prostokata')
                    a =int(input())
                    b = int(input())
                    while a<= 0 or b<= 0:
                        print('Boki nie moga byc krotsze/rowne 0')
                        a = int(input())
                        b = int(input())
                    res = a*b
                    print('Pole prostokata to: ' + str(res))
                    break
                except ValueError:
                    print('Musza byc uzywane liczby')

        if choice == 2:
            while True:
                try:
                    a = float(input('Podaj podstawe: '))
                    h = float(input('Podaj wysokosc: '))
                    while a<=0 or h<=0:
                        print('Podstawa/wysokosc nie moze byc mniejsza/rowna 0')
                        a = float(input('Podaj podstawe: '))
                        h = float(input('Podaj wysokosc: '))
                    res = (a*h)*0.5
                    print('Pole trojkata to: ' + str(res))
                    break
                except ValueError:
                    print('Musza byc uzywane liczby')

        if choice==3:
            while True:
                try:
                    r = float(input('Podaj promien kola: '))
                    while r<=0:
                        print('Promien nie moze byc mniejszy/rowny 0')
                        r = float(input('Podaj promien kola: '))
                    res = math.pi*(pow(r,2))
                    print('Pole kola to: ' + str(res))
                    break
                except ValueError:
                    print('Musza byc uzywane liczby')
                
        if choice==4:
            while True:
                try:
                    for i in range(1):
                        ch = int(input("Podaj maksymalna grubosc choinki: "))
                        while ch<=0:
                            print('Nie moze byc mniejsza/rowna 0')
                            ch = int(input("Podaj maksymalna grubosc choinki: "))

                    for ch in range(i, ch+1):
                        print(ch * "*")
                    break
                except ValueError:
                    print('Musza byc uzywane liczby')
        if choice == 5:
            break
    except ValueError:
        print('Podaj liczbe')


