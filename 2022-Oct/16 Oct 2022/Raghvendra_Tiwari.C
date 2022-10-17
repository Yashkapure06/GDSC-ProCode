#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int c[n][n];
    printf("Enter values of 1st array");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter values of 2nd array");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The sum of two arrays is :");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
    }
return 0;
}
