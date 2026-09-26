#include<stdio.h>
int main(void)
{
    char szStr[] = "Hello";
    char * pszStr = "Good";
    char szText[50];

    sprintf(szText,"%s%s%s",szStr,pszStr,"Night");
    printf(szText);                                     //HelloGoodNight

    return 0;
}