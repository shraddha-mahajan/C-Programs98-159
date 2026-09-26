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

    iRes = strncmp(szStr1,szStr2,iCounter);
    if(iRes == 0)
    
        printf("\nBoth String are Same");
        else
        printf("\nBoth String are Different");   

    return 0;

}
/*Enter first String:
hello
Enter Second String:
hero

Enter no:       2

Both String are Same


Enter first String:
hii
Enter Second String:
Hello

Enter no:       1

Both String are Different


Enter first String:
good
Enter Second String:
good

Enter no:        4

Both String are Same

 */