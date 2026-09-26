#include<stdio.h>
#include<string.h>
int main(void)
{
    char szStr[20];
    printf("Enter A String:\t\n");                 //Enter A String:
    gets(szStr);                                  //GOOD MORNING

    strlwr(szStr);

    printf("String In Lower Case Is:\t");        //String In Lower Case Is:        good morning
    puts(szStr);

    return 0;
}