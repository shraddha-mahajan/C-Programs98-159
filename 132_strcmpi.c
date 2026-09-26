#include<stdio.h>
#include<string.h>
int main(void)
{
    char  szStr1[20];
    char  szStr2[20];
    int iRes;
    
    printf("Enter first String:\t\n");         
    gets(szStr1);                                 
    printf("Enter Second String: \t\n");           
    gets(szStr2);                             

    iRes = strcmpi(szStr1,szStr2);
    if(iRes == 0)
    
        printf("\nBoth String are Same");
        else
        printf("\nBoth String are Different");   

    return 0;

}
/*
Enter first String:
hello
Enter Second String:
Hello

Both String are Same
*/