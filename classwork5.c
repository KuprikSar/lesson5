#include <inttypes.h>
#include <stdio.h>
#include <ncurses.h>
#include <locale.h>

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
