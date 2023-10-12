#include <stdio.h>

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
