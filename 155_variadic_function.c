#include<stdio.h>
#include<stdarg.h>

int myprintf(const char *, ...);
int Addition(int, ...);

int main(void)
{
    int iRet;
    iRet = myprintf("Hello\n");                           //Hello
    myprintf("printf returned %d\n",iRet);                //printf returnrd 6
    myprintf("%d\n", 10);                                 //10
    myprintf("%c\t%d\n", 'A', 10);                        //A 10
    myprintf("%d\t%c\n", 10, 'A');                        //10 A
    myprintf("%c\t%d\t%f\t%lf\n",'A',10,57.33f,69.33);    //A       10      57.330002       69.330000

    iRet = Addition(2, 10, 20);
    printf("Answer is %d\n", iRet);                       //Answer is 30

    iRet = Addition(3, 10, 20, 30);                       //Answer is 60
    printf("Answer is %d\n", iRet);

    iRet = Addition(4, 10, 20, 30, 40);                   //Answer is 100
    printf("Answer is %d\n", iRet);

    return 0;
}

int myprintf(const char *pszFormat, ...)
{

    int iRet;
    va_list pArg = NULL;

    va_start(pArg, pszFormat);

    iRet = vprintf(pszFormat, pArg);

    va_end(pArg);

    return iRet;
}

int Addition(int iNumberOfParams, ...)
{
    int iAns;
    int iCounter;
    va_list pArg = NULL;

    va_start(pArg, iNumberOfParams);

    for(iCounter = 0, iAns = 0; iCounter < iNumberOfParams; iCounter++)
        iAns = iAns + va_arg(pArg, int);

        va_end(pArg);

        return iAns;
}