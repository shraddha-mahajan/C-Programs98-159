#include<stdio.h>
#include<string.h>
int main(void)
{
char szStr[] = "Hello";

printf("sized of string is: %d\n",sizeof(szStr));       //sized of string is: 6
printf("string length is: %d\n",strlen(szStr));         //string length is: 5
printf("%c\n",szStr[4]='Z');                            //Z
printf("%s\n",szStr);                                  //HellZ
// printf("%s\n",szStr="Bye");                         //error: assignment to expression with array type

return 0;
}