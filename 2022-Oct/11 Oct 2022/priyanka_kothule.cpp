#include <iostream>

using namespace std;

bool checkPalin(string word)
{
    int n = word.length();
    transform(word.begin(), word.end(), word.begin(), ::tolower);
 
    for (int i = 0; i < n; i++,n--)
    if (word.at(i) != word.at(n - 1))
        return false;    
    return true;
}
 
int countPalin(string str)
{        
    str = str + " ";
     
    string word = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
         
        if (ch != ' ')
            word = word + ch;
        else {
            if (checkPalin(word))
                count++;
            word = "";
        }
    }
     
    return count;
}
     
int main()
{
     
    cout<<countPalin("MOM AND DAD ARE MY BEST FRIENDS ")<<endl;
                 
}
