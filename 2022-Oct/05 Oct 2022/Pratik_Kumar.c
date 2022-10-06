#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,l=0,m=0,max=0,c=0;
    char str[50];
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]<'A'||str[i]>'Z') && (str[i]<'a'||str[i]>'z') && (str[i]<'0'||str[i]>'9'))
        {
            if(l>0)
            {
                if(l>max)
                {
                    max=l;
                    m=c;
                }
            c++;
            l=0;
            }
        }
        else
        {
            l++;
        }
        i++;
    }
    if(l>0)
    {
        if(l>max)
        max=l;
    }
    printf("%d",max);
    return 0;
}
