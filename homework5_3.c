// Верно ли что сумма цифр в числе равна их произведению

#include <stdio.h>

int digitSum(int num) 
{
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int digitProduct(int num) 
{
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() 
{
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    int sum = digitSum(num);
    int product = digitProduct(num);

    if (sum == product) 
    {
        printf("Сумма цифр равна их произведению\n");
    } 
    else 
    {
        printf("Сумма цифр не равна их произведению\n");
    }
    return 0;
}