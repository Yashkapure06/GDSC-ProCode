#include <stdio.h>

int main()
{
    char str[100];
    int count=0,i;
  printf("Enter a string: ");
    gets(str);
for (i= 0; str[i] != NULL;i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
            count++;
    }

    printf("Total Upper case characters: %d", count);

    return 0;
}
  
