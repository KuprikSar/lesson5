#include <inttypes.h>
#include <stdio.h>
//#include <ncurses.h>
#include <locale.h>
#include <math.h>

#define EPSILON 0.001

/*
int main(int argc, char **argv)
{
    char Choice;
    setlocale(LC_ALL, "Rus");
    while(1)
    {
        printf("1. Вычисление корней квадратного уравнения\n");
        printf("0. Выход\n");
        printf("Для выход нажмите Q\n");
NO_PRINT:
        Choice = getch();
        switch(Choice)
        {
            case '1':
                printf("SquareEquation()\n");
            break;
            case '0':
            case 'q':
            case 'Q':
                return 0;
            break;
            case 0xa://'\n':
                goto NO_PRINT;
            default:
            printf("Непонятныйn выбор %x\n", Choice);
            break;
        }           
    }
    return 0;
}
*/

/* 
int factorial (int a) 
{
    int n, fact = 1;
    for (n = 1; n <= a; n++)
    {
        fact *= n;
    }
    return fact;
}


float cosinus (float) 
{
    float number = 1.;
    scanf("%d", &number);
    
    do
    {
        int sign = (i % 2) * -1;
        number += 
    } while );
    

    for (int i = 1; i < number; i++)
    {
        float cos = 1 - (number * number) / factorial(number);
    }
}
*/

/*
int main() {
    int num, sum = 0;
    printf("Введите число: ");
    scanf("%d", &num);
    
    // Вычисляем сумму цифр числа
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    
    if (sum % 2 == 0) {
        printf("Сумма цифр числа четная\n");
    } else {
        printf("Сумма цифр числа нечетная\n");
    }
    
    return 0;
}
*/

/*
int main() {
    int num, lastDigit, prevDigit;
    printf("Введите число: ");
    scanf("%d", &num);
    
    prevDigit = num % 10;
    num /= 10;
    
    // Проверяем поочередно каждую цифру числа
    while (num != 0) {
        lastDigit = num % 10;
        num /= 10;
        
        if (lastDigit < prevDigit) {
            printf("Цифры в числе не идут по возрастанию\n");
            return 0;
        }
        
        prevDigit = lastDigit;
    }
    
    printf("Цифры в числе идут по возрастанию\n");
    return 0;
}
*/

int function (int a) 
{   
    if (a >= -2 && a < 2)
        return a * a;
    else if (a >= 2)
        return a * a + 4 * a + 5;
    else 
        return 4;
}

int main (void) {

    int num = 1;
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
                
        int result = function(num);
        printf("%d\n", result);
    }
    return 0;
}