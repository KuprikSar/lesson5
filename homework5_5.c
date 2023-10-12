#include <stdio.h>
#include <stdbool.h>

bool checkBrackets(char* str) 
{
    int count = 0;

    for (int i = 0; str[i] != '.'; i++) 
    {
        if (str[i] == '(') 
        {
            count++;
        } 
        else if (str[i] == ')') 
        {
            count--;
        }

        if (count < 0) 
        {
            return false;
        }
    }

    if (count == 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

int main() 
{
    char str[101];
    printf("Введите строку со скобками (конец строки - символ \'.\'): ");
    scanf("%100s", str);  

    bool result = checkBrackets(str);
    
    if (result) {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}