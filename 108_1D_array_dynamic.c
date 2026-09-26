#include<stdio.h>
#include<malloc.h>
int main(void)
{
    int iCounter;
    int iNoofElement;
    int *pPtr = NULL;

    printf("Enter element you want to (<%d)\n");//Enter element you want to (<4201040)
    scanf("%d",&iNoofElement);                  //5

    pPtr = (int *) malloc(iNoofElement*(sizeof(int)));

    if(NULL == pPtr)
    {
        printf("Memory allocation is FAILD");
        return -1;
    }
    for(iCounter = 0;iCounter<iNoofElement;iCounter++)
    {                                                    //Eneter value of pPtr[0] 10
                                                         //Eneter value of pPtr[1] 20
        printf("Eneter value of pPtr[%d]\t",iCounter);   //Eneter value of pPtr[2] 30
        scanf("%d",&pPtr[iCounter]);                     //Eneter value of pPtr[3] 40
    }                                                    //Eneter value of pPtr[4] 50
    printf("1D array is:\n");                            //1D array is:
    for(iCounter=0;iCounter<iNoofElement;iCounter++)
    {
    printf("Value of pPtr [%d]:%d\t",iCounter,pPtr[iCounter]);//Value of pPtr [0]:10    Value of pPtr [1]:20    Value of pPtr [2]:30    Value of pPtr [3]:40    Value of pPtr [4]:50
    }

    if(pPtr != NULL)
    {
        free(pPtr);
        pPtr = NULL;
    }

    free(pPtr);
    return 0;
}