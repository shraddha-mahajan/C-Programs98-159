#include<stdio.h>
void Fun(int **);
int main(void)
{
    int *pPtr = NULL;

    Fun(&pPtr);

    printf("*pPtr is: %d\n",*pPtr);//*pPtr is: 10    //dangling pointer

    return 0;
}
void Fun(int **ppPtr)
{
    int iNo = 10;
    *ppPtr = &iNo;

    printf("&iNo is: %d\n",&iNo);//&iNo is: 6422252
    printf("ppPtr is: %d\n",ppPtr);//ppPtr is: 6422300
    printf("*ppPtr is: %d\n",*ppPtr);//*ppPtr is: 6422252
    printf("**ppPtr is: %d\n",**ppPtr);//**ppPtr is: 10
}