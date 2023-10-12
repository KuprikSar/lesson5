// сколько зерен на доске

#include <stdio.h>

int bobs (int a) 
{
    int mult = 1;
    for (int i = 2; i <= a; i++)
    {
        mult *= 2;
    }
    return mult;
}

int main () {

    int c;
    scanf("%d", &c);
    printf("На доске %d зерен\n", bobs(c));
    return 0;
}

