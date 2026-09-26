#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20];
    printf("Enter A String:\t\n");                 //Enter A String:
    gets(szStr);                                  //hello

    strupr(szStr);

    printf("String In Upper Case Is:\t");        //String In Upper Case Is:        HELLO
    puts(szStr);

    return 0;
}