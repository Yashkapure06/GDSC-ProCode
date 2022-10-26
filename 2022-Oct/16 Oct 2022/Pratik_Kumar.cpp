#include <iostream>
using namespace std;

int main()
{
    int n, A[100][100], B[100][100], Output[100][100], i, j;
    cin >> n;
    for(i = 0; i < n; ++i)
       for(j = 0; j < n; ++j)
       {
           cin >> A[i][j];
       }

    for(i = 0; i < n; ++i)
       for(j = 0; j < n; ++j)
       {
           cin >> B[i][j];
       }
  
  
    for(i = 0; i < n; ++i)
        for(j = 0; j < n; ++j)
            Output[i][j] = a[i][j] + b[i][j];

    for(i = 0; i < n; ++i)
        for(j = 0; j < n; ++j)
        {
            cout << Output[i][j] << "  ";
            if(j == n - 1)
                cout << endl;
        }

    return 0;
}
