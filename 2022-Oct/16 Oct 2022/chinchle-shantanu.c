#include <stdio.h>
int main()
{
    int i,j,o;
    printf("Enter size of matrix\n");
    scanf("%d",&o);

    int a[o][o],b[o][o];
    printf("Enter 1st matrix\n");
    for(i=0; i<o; i++)
    {
        for ( j = 0; j < o; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("Enter 2st matrix\n");
    for(i=0; i<o; i++)
    {
        for ( j = 0; j < o; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("\nAddition of matrix is:-\n\n");


    for(i=0; i<o; i++)
    {
        int c[o][o];
        for(i=0; i<o; i++)
        {
            for(j=0; j<o; j++)
            {
                c[i][j]=a[i][j] + b[i][j];
            }
        }
        for(i=0; i<o; i++)
        {
            for ( j = 0; j < o; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}
