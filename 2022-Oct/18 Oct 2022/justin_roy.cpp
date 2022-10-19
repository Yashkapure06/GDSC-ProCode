#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    int A[N][N] = {};
    cout << "Enter 2D Array Elements" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }

    // Tranforming row to Column
    int tran[N][N] = {};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tran[i][j] = A[j][i];
        }
    }

    // Printing 2D Array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << tran[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Sample Input:
int A[N][N] = { { 1, 1, 1, 1 },
              { 2, 2, 2, 2 },
              { 3, 3, 3, 3 },
              { 4, 4, 4, 4 } };

Sample Output:
      1 2 3 4
      1 2 3 4
      1 2 3 4
      1 2 3 4

*/
