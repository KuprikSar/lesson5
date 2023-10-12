#include <stdio.h>

int max (int a, int b) {

   if (a > b)
   {
    return a;
   }
    return b;
}

int main (void) {

    int a, b;
    scanf ("%d%d", &a, &b);
    int result = max(a,b);
    printf("max = %d\n", max(a,b));
    return 0;
}