#include<stdio.h>
#define MAX 10
int main(void)
{
    int arr[MAX];
    int iNoofElements;
    int iCounter;

    printf("How many element you want to enter:\n");//How many element you want to enter:
    scanf("%d",&iNoofElements);                     //4

    printf("Enter 1D array elements:\n");              //Enter 1D array elements:
    for(iCounter=0;iCounter<iNoofElements;iCounter++)  //arr[0]  10
    {                                                  //arr[1]  20
        printf("arr[%d]\t",iCounter);                  //arr[2]  30
        scanf("%d",&arr[iCounter]);                    //arr[3]  40
    }                                                 
                                                       
    printf("print 1D array elements:\n");             //print 1D array elements:
    for(iCounter=0;iCounter<iNoofElements;iCounter++) 
    {
        printf("arr %d is [%d]\t",iCounter,arr[iCounter]); //arr 0 is [10]   arr 1 is [20]   arr 2 is [30]   arr 3 is [40]
    }
    return 0;
}
