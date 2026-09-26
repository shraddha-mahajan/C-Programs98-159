#include<stdio.h>
#include<string.h>
int main(void)
{
    char  szStr1[20];
    char  szStr2[20];
    int iRes;
    int iCounter;

    printf("Enter first String:\t\n");         
    gets(szStr1);                                 
    printf("Enter Second String: \t\n");           
    gets(szStr2);
    printf("\nEnter no:\t");
    scanf("%d",&iCounter);                               

    iRes = strncasecmp(szStr1,szStr2,iCounter);
    if(iRes == 0)
    
        printf("\nBoth String are Same");
        else
        printf("\nBoth String are Different");   

    return 0;

}
/*
Enter first String:
Good
Enter Second String:
good

Enter no:       1

Both String are Same


Enter first String:
hello
Enter Second String:
hii

Enter no:       2

Both String are Different
 */