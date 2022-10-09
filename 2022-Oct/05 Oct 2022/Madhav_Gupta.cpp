#include <iostream>
using namespace std;
int main()
{
    int count, max_count = 0;
    char str[100], *ptr;
    cout << "Enter a string: ";
    gets(str);
    ptr = str;
    while (*ptr)
    {
        count = 1;
        while (*ptr != ' ' && *ptr)
        {
            count++;
            ptr++;
        }
        if (count > max_count)
            max_count = count;
        while (*ptr == ' ' && *ptr)
        {
            ptr++;
        }
    }
    cout << "Length of word with maximum length = " << max_count-1;
    return 0;
}
