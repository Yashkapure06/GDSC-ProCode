#include <stdio.h> 
int main()
{
    int i,n,d;;
    printf("Enter the number of array\n");
     scanf("%d",&n);
     int arr[n];
     printf("Enter the array\n");
     for (i = 0; i < n; i++)
     {
      scanf("%d", &arr[i]);
     }
    printf("Given array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Enter the ploace to rotate\n");
    scanf("%d",&d);
    printf("\nRotated array is\n");
    int temp[n];
 
    int k = 0;
 
    for (int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }
 
    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}
