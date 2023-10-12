#include <stdio.h>

/*
void max (void) {
    int a, b;
    scanf ("%d%d", &a, &b);
    if (a > b)
    {
        printf("max = %d\n", a);
    }
    else
    printf("max = %d\n", b);
}

int main (int argc, char **argv) {

    max();
    return 0;
}
*/

/*
int y = 1;

int mult2 (int a) {
    static int b = 2;
    a = a * 2;
    return a + b + y;
}

int main (int argc, char **argv) {

    int a = 35;
    mult2(a);
    printf("main a = %d\n", a);
    return 0;
}
*/

int main (int argc, char **argv) { // буферный ввод

    char c;
    int status = puts("Enter the symbol, '.' is exit:");
    do
    {
        c = getchar();
        status = putchar(c);
    } 
       while (c != '.');
       return 0;
}

