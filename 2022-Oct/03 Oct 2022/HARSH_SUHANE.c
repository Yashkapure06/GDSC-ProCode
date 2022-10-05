#include <stdio.h>  
int main()  
{  
    int i, len = 0;  
    char str[] = "Great Power";   
    len = sizeof(str)/sizeof(str[0]);  
    for(i = 0; i < len; i++)
    {   
        if(isupper(str[i]))
        {  
            str[i] = tolower(str[i]);  
        }  
        else if(islower(str[i]))
        {   
            str[i] = toupper(str[i]);  
        }  
    }  
    printf("String after case conversion : %s", str);  
    return 0;  
}  
//OUTPUT:String after case conversion :  gREAT pOWER
