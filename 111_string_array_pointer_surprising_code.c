#include<stdio.h>
// #include<string.h>
void Fun1(char []);
void Fun2(char * );
int main(void)
{
    char szStr[] = "Hello";
    char * pszStr = "Hello";

    Fun1(szStr);
    Fun2(pszStr);
    
    return 0;
}
void Fun1(char szStr[]) 
{
    printf("%c\n",szStr[3]='Z');  //Z          
    printf("%s\n",szStr="Bye");  //Bye
}
void Fun2(char * pszStr)
{
    
    printf("%c\n",pszStr[3]='Z'); //z 
    printf("%s\n",pszStr="Bye");  //Bye
    
}

