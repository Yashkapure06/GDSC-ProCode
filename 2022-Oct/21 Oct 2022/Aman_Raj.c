#include <stdio.h> 
int main()
{
    int i,j,p;
    printf("Enter size of matrix\n");
    scanf("%d",&p);

    int a[p][p],b[p][p];
    printf("Enter 1st matrix\n");
    for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
     printf("Enter 2nd matrix\n");
     for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("The given Matrix are\n");
      for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
      printf("\n");
     for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
     int rslt[p][p];
 
    printf("Multiplication of given two matrices is:\n");
 
    for (i = 0; i < p; i++) {
        for (j = 0; j < p; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < p; k++) {
                rslt[i][j] += a[i][k] * b[k][j];
            }

        }
    }
     for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d ",rslt[i][j]);
        }
       printf("\n"); 
    }
    return 0;
}
