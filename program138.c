#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src>='a' && *src<= 'z')
        {
            *dest = *src -32;
        } 
        else
        {
            *dest = *src;
        }   
        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is : %s\n",Brr);

    return 0;
}