
print('Z ilu el. ma sie skladac lista')
while True:
    len = int(input())
    if len > 0:
        break
    print('Lista nie moze byc krotsza/rowna 0')


print('Wprowadz liczby od 1 do 10')
num = []

i = 1
while True:
    while i <= len:
        try:
            print(f'Wpisz liczbe {i}')
            numnext = int(input())
            while numnext < 1 or numnext > 10:
                print('Wpisz liczbe od 1 do 10')
                numnext = int(input())
            num.append(numnext)
            i = i+1
        except ValueError:
            print('Obslugiwane tylko liczby')
    break
num.sort()
print('Posortowana lista:')
i = 1
while i <= len:
    print(f'Element {i}: {num[i-1]}')
    i = i+1
