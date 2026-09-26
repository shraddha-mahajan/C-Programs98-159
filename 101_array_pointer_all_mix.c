#include<stdio.h>
int main(void)
{
    int arr[] = {10,20,30,40,50};
    int *pPtr[] = {arr,arr+1,arr+2,arr+3,arr+4,};
    int **ppPtr = pPtr;

    printf("arr: %d,*arr: %d,&arr: %d\n",arr,*arr,&arr);//arr: 6422280,*arr: 10,&arr: 6422280
    printf("pPtr: %d,*pPtr: %d, **pPtr: %d\n",pPtr,*pPtr,**pPtr);//pPtr: 6422260,*pPtr: 6422280, **pPtr: 10
    printf("ppPtr: %d,*ppPtr: %d, **ppPtr: %d\n",ppPtr,*ppPtr,**ppPtr);//ppPtr: 6422260,*ppPtr: 6422280, **ppPtr: 10

    *ppPtr++;
    printf("\nppPtr-pPtr: %d, *ppPtr-arr: %d, **ppPtr: %d\n",ppPtr-pPtr,*ppPtr-arr,**ppPtr);//ppPtr-pPtr: 1, *ppPtr-arr: 1, **ppPtr: 20

    *++ppPtr;
    printf("ppPtr-pPtr: %d, *ppPtr-arr: %d, **ppPtr: %d\n",ppPtr-pPtr,*ppPtr-arr,**ppPtr);//ppPtr-pPtr: 2, *ppPtr-arr: 2, **ppPtr: 30

    ++*ppPtr;
    printf("ppPtr-pPtr: %d, *pPtr-arr: %d, **ppPtr: %d\n",ppPtr-pPtr,*ppPtr-arr,**ppPtr);//ppPtr-pPtr: 2, *pPtr-arr: 3, **ppPtr: 40


    return 0;
}