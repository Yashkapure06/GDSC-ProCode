#include <stdio.h>
#include <stdlib.h>

int size;

void matrixMul(int A[][size], int B[][size])
{
	int ans[size][size];

	printf("Multiplication of given two matrices is:\n");

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			ans[i][j] = 0;

			for (int k = 0; k < size; k++) {
				ans[i][j] += A[i][k] * B[k][j];
			}

			printf("%d\t", ans[i][j]);
		}

		printf("\n");
	}
}

int main()
{
    // int size;
	printf("Enter the size of matrix: ");
    scanf("%d", &size);

	int A[size][size];
	int B[size][size];

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d", &B[i][j]);
        }
    }

	matrixMul(A, B);

	return 0;
}