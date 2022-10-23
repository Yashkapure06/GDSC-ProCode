#include<stdio.h>
#include<conio.h>


int main()
{
    int a[1000],i,n,j,d,temp;

    printf("Enter size of the  array:- ");
    scanf("%d", &n);
    printf("Enter elements in array:-");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position of array:- ");
    scanf("%d", &d);

    for(i=0; i<d; i++)
    {
        temp=a[0];
        for(j=0; j<n-1; j++)
        {
           a[j]=a[j+1];
		}

         a[n-1]=temp;


    }
    printf("\narray elements after left rotate:- ");

    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }

 }
