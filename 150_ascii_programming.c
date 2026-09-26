#include<stdio.h>
#include<string.h>
int main(void)
{
char chChar ='A';
char szStr[] = "Hello";
char * pszStr = "Hello";

printf("sizeof(chChar):\t%d\n",sizeof(chChar));         //sizeof(chChar): 1
printf("sizeof(szStr):\t%d\n",sizeof(szStr));           //sizeof(szStr):  6
printf("sizeof(pszStr):\t%d\n",sizeof(pszStr));         //sizeof(pszStr): 4

printf("strlen(szStr):\t%d\n",strlen(szStr));           //strlen(szStr):  5
printf("strlen(pszStr):\t%d\n",strlen(pszStr));         //strlen(pszStr): 5

return 0;
}
