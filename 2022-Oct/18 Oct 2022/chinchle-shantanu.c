#include <stdio.h>
int main()
{
    int i,j,o;
    printf("size of matrix:-\n");
    scanf("%d",&o);

    int a[o][o],b[o][o];
    printf("Enter matrix:-\n");
    for(i=0; i<o; i++)
    {
        for ( j = 0; j < o; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0; i<o; i++)
    {
        for ( j = 0; j < o; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("inverted matrix is:-\n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<o; j++)
        {

            b[j][i]=a[i][j];
        }
    }
    for(i=0; i<o; i++)
    {
        for ( j = 0; j < o; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
