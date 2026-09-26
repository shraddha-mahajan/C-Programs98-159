
#include<stdio.h>
#include<string.h>
int main(void)
{
    char  szStr[20];
    char chChar;

    printf("Enter String:\t\n");           
    gets(szStr);                               
    printf("Enter The Character To Set:\t\n");           
    scanf("%c",&chChar);    
    
    strset(szStr,chChar);                         //This function not supported for all compilers

    printf(" Now String is:\t\n");
    puts(szStr);
  
    return 0;
}