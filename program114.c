#include<stdio.h>

int main()
{
    char Arr[30];
   
    printf("Please enter Full Name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your name is :%s\n",Arr);

    return 0;
}