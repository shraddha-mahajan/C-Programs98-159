
#include<stdio.h>
#include<string.h>
int main(void)
{
    char  szStr[20];
    char chChar;
    int iNo;

    printf("Enter String:\t\n");           
    gets(szStr);                               
    printf("Enter The Character To Set:\t");           
    scanf("%c",&chChar);    
    printf("Enter The value of iNo:\t");           
    scanf("%d",&iNo); 
    
    strset(szStr,chChar,iNo);                        ///This function not supported for all compilers

    printf(" Now String is:\t\n");
    puts(szStr);
  
    return 0;
}