// Функция которая определяет сумму чисел от 1 до N
#include <stdio.h>

int SUM (int a) 
{
    int n, sum = 0;
    for (n = 1; n <= a; n++)
    {
        sum += n;
    }
    return sum;
}

int main () 
{
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    int product = SUM(num);
    printf("%d\n", product);
    return 0;
}