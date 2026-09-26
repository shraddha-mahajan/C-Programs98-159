#include<stdio.h>
int main(void)
{
    int *pPtr = NULL;
    {
        int iNo = 10;
        pPtr = &iNo;
        printf("*pPtr is: %d\n",*pPtr);//*pPtr is: 10
    }
    printf("*pPtr is: %d\n",*pPtr);//*pPtr is: 10     //dangling pointer
    return 0;
}