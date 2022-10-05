#include <stdio.h>

int main()
{
    char str[100];
    
    int i, countU = 0;

    printf("Enter a string: ");
    gets(str);

    for (i= 0; str[i] != NULL;i++) {

        if (str[i] >= 'A' && str[i] <= 'Z')
            countU++;
    }

    printf("Total Upper case characters: %d", countU);

    return 0;
}
