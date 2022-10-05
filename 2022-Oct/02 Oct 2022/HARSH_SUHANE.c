#include <stdio.h>

int main()
{
    char str[100];
    int count=0,i;
  printf("Enter a string: ");
    gets(str);
for (i= 0; str[i] != NULL;i++)
    {
      if (str[counter] >= 'a' && str[counter] <= 'z')
            count++;
    }

    printf("Total Upper case characters: %d, Lower Case characters: %d", countU, countL);

    return 0;
}
