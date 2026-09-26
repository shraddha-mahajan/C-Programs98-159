#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20];
    printf("Enter A String:\t\n");                 //Enter A String:
    gets(szStr);                                  //hello

    strrev(szStr);

    printf("Reverse String Is:\t");             //Reverse String Is:      olleh
    puts(szStr);

    return 0;
}