#include<stdio.h>
int Addition(int, int);
int Multiplication(int, int);
int main(void)
{
    int (*pPtr)(int, int) = NULL;
    int iAns;

    pPtr = Addition;
    iAns = pPtr(10, 20);

    printf("Addition is: %d\n",iAns);//Addition is: 30

    pPtr = Multiplication;
    iAns = pPtr(10,20);

    printf("Multiplication is: %d\n",iAns);//Multiplication is: 200

    return 0;
}
int Addition(int iNo1, int iNo2)
{
    return  iNo1 + iNo2;  
}

int Multiplication(int iNo1, int iNo2)
{
    return  iNo1 * iNo2;  
}