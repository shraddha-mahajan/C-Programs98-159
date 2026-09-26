#include<stdio.h>
int main(void)
{
    int iNo = 10;
    void *pPtr = &iNo;
    char chChar = 'A';

    printf("&iNo is: %d\n",&iNo);//&iNo is: 6422300
    printf("&chChar is: %d\n",&chChar);//&chChar is: 6422295

    printf("&pPtr is: %d\n",&pPtr);//&pPtr is: 6422296
    printf("pPtr is: %d\n",pPtr);//pPtr is: 6422300
    // printf("*pPtr is: %d\n",*pPtr);//error: invalid use of void expression
    printf("*(int*)pPtr is: %d\n",*(int*)pPtr);//*(int*)pPtr is: 10

    pPtr = &chChar;
    printf("&pPtr is: %d\n",&pPtr);//&pPtr is: 6422296
    printf("pPtr is: %d\n",pPtr);//pPtr is: 6422295
    //printf("*pPtr is: %d\n",*pPtr);//error: invalid use of void expression
    printf("*(chChar*)pPtr is: %c\n",*(char*)pPtr);//*(chChar*)pPtr is: A

    return 0;
}