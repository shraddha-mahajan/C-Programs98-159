#include<stdio.h>
#include<string.h>
int main(void)
{
char * pszStr = "Hello";

printf("sized of pszStr is: %d\n",sizeof(pszStr));     //sized of pszStr is: 4       
printf("string length is: %d\n",strlen(pszStr));       //string length is: 5
// printf("%c\n",pszStr[3]='Z');                          //crash here
printf("string is: %s\n",pszStr);                      //string is: Hello                                
printf("%s\n",pszStr="Bye");                           //Bye
printf("string is: %s\n",pszStr);                      //string is: Bye

return 0;
}



