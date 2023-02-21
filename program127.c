#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char cValue)
{

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[20];
    char cCh = '\0';
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter character\n");
    scanf(" %c",&cCh);
    
    bRet = Check(Arr,cCh);
    if(bRet == true)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");

    }
    return 0;

}