#include<stdio.h>
#include<math.h>
#include<complex.h>

void print_equation(int pow_max, float array_val[], float free_val)
{
    printf("Twoje rowanie to: (%f)X^%d + ", array_val[pow_max - 1], pow_max);
    for (int i = pow_max - 1; i > 0; i--)
    {
        printf("(%f)X^%d + ", array_val[i - 1], i);
    }
    printf("(%f)\n", free_val);

}

float func(int pow_max, float array_x[], float free_val, float x_val)
{
    float eq[11], sum = 0;
    for (int i = pow_max; i > 0; i--)
    {
        eq[i - 1] = array_x[i - 1] * pow(x_val, i);
    }
    for (int i = pow_max; i > 0; i--)
    {
        sum += eq[i - 1];
    }
    sum = sum + free_val;
    return sum;
}

float x_equation(float val_x1, float func_0, float val_x0, float func_1)
{
    float eq_val = 0;
    eq_val = (val_x1 * func_0 - val_x0 * func_1) / (func_1 - func_0);
    return fabsf(eq_val);
}

int main()
{
    printf("Wyznaczanie pierwiastkow rzeczywistych metoda siecznych:\n");
start:
    printf("Ktorego stopnia jest najwyzsza potega przy x? (maksymalnie do 10 potegi)\n pow= ");
    int pow_m = 0, attemptcount = 62, choice = 0;
    float num_x[11], free, x[62], func_x[62];
    scanf("%d", &pow_m);
    if (pow_m > 10 || pow_m < 0)
    {
        goto start;
    }
    for (int i = pow_m; i > 0; i--)
    {
        printf("Wpisz wartosc przy x^%d= ", i);
        scanf("%float", &num_x[i - 1]);
    }
    printf("Wpisz wartosc wolna: ");
    scanf("%f", &free);
    print_equation(pow_m, num_x, free);
setx:
    printf("Podaj wartosc x0 i x1, jezeli nie spelnia warunkow f(x0)f(x1)<0, bedzie potrzebne ponowne wprowadzenie wartosci.\nX0 = ");
    scanf("%f", &x[0]);
    printf("X1 = ");
    scanf("%f", &x[1]);
    func_x[0] = (func(pow_m, num_x, free, x[0]));
    func_x[1] = (func(pow_m, num_x, free, x[1]));
    printf("Funkcja x0 = %f\n", func_x[0]);
    printf("Funkcja x1 = %f\n", func_x[1]);
    if (func_x[0] * func_x[1] > 0)
    {
        goto setx;
    }
    for (int i = 2; i < attemptcount; i++)
    {
        x[i] = x_equation(x[i - 1], func_x[i - 2], x[i - 2], func_x[i - 1]);
        printf("X%d = %f\t", i + 1, x[i]);
        func_x[i] = (func(pow_m, num_x, free, x[i]));
        printf("f(X%f) = %15.8f\n", x[i], func_x[i]);
        if (((fabsf(x[i] - x[i - 1]) < 0.00001)) || (fabsf(func_x[i])) < 0.00001)
        {
            printf("Wynik to: %f\n", x[i]);
            break;
        }
    }
    printf("Czy chcesz rozwiazac jeszcze jedno rownanie?\n Tak = 1\n Nie = 2\n");
    scanf("%d", &choice);
    if (choice == 1)
        goto start;
    if (choice == 2)
        return 0;

}
