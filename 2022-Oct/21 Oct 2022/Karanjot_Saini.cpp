#include<iostream>
using namespace std;
int main()
{
    int matOne[3][3], matTwo[3][3], matThree[3][3];
    int i, j, k, sum=0;
    cout<<"Enter 9 Elements for First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matOne[i][j];
    }
    cout<<"\nEnter 9 Elements for Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matTwo[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + (matOne[i][k] * matTwo[k][j]);
            matThree[i][j] = sum;
        }
    }
    cout<<"\nMultiplication Result:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matThree[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
