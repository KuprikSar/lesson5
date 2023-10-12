// составить функцию которая определяет максимальный общий делитель у двух натуральных чисел

#include <stdio.h>

int NOD (int a, int b) 
{
    if (b ==0)
    {
        return a;
    }
    return NOD(b, a % b);  
}

int main () {

    int num1, num2;
    printf("Введите два числа: ");
    scanf("%d%d", &num1, &num2);

    int result = NOD(num1, num2);

    printf("Наибольший общий делитель: %d\n", result);
    return 0;
}