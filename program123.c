#include<stdio.h>
int CountFreq(char *str, char cValue)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    char cCh = '\0';
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    
    iRet = CountFreq(Arr,'a');
    printf("Frequency of %c is : %d\n",cCh,iRet);

    return 0;

}