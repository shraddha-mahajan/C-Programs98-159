#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20];
    char chChar;
    char * pszStr;

    printf("Enter A String:\t\n");                 //Enter A String:
    gets(szStr);                                   //Hello, Good Morning
    printf("Enter Character To be Found:\t");      //Enter Character To be Found:    d
    scanf("%c",&chChar);

    pszStr = strchr(szStr,chChar);

    if(pszStr == NULL)
    printf("\nCharacter is not found\n");
    else
    printf("\nCharacter Is Found At %d Location\n",(pszStr-szStr)+1);   //Character Is Found At 11 Locationa

    return 0;
}