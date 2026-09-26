#include<stdio.h>
#include<malloc.h>
int main(void)
{
    int iCounter;
    int iElementCount1 = 5;
    int iElementCount2 = 7;
    int *pPtr = NULL;
    int *pTemp = NULL;

    pPtr = (int *) malloc(5 * sizeof(int));
    if (pPtr == NULL) 
    {
        printf("Memory Allocation Faild\n");
        return -1;  
    }
    printf("Memory allocated for 5 integers (20 bytes): \n");

    for (iCounter = 0; iCounter < iElementCount1; iCounter++)
    {
        printf("Enter arr[%d] value: ", iCounter);
        scanf("%d", &pPtr[iCounter]);
    }

    pTemp = (int *) realloc(pPtr,7 * sizeof(int));
    if (pTemp != NULL) 
    {
        pPtr = pTemp;  
        pTemp = NULL;  

        printf("Memory reallocated by 7 integers (28 bytes): \n");
        for (iCounter = iElementCount1; iCounter < iElementCount2; iCounter++)
        {
            printf("Enter arr[%d] value: ", iCounter);
            scanf("%d", &pPtr[iCounter]);
        }
    }
    else 
    {
        printf("Memory reallocation Faild\n"); 
        return -1;
    }

   
    pTemp = (int *) realloc(pPtr, 3 * sizeof(int)); 
    if (pTemp != NULL) 
    {
        pPtr = pTemp;  
        pTemp = NULL;  
        printf("Memory reallocated to shrink to 3 integers (12 bytes): \n");

        for (iCounter = 0; iCounter < 3; iCounter++)
        {
            printf("Enter arr[%d] value: ", iCounter);
            scanf("%d", &pPtr[iCounter]);
        }
    } 
    else
    {
        printf("Memory reallocation FAILED by shrinking to 3 integer: \n");
        return -1;
    }

    
    printf("values in memory after reallocations: \n");
    for (iCounter = 0; iCounter < 3; iCounter++) 
    {
        printf("arr[%d] = %d\n", iCounter, pPtr[iCounter]);
    }

    free(pPtr);

    return 0;
}

/*
Memory allocated for 5 integers (20 bytes): 
Enter arr[0] value: 10
Enter arr[1] value: 20
Enter arr[2] value: 30
Enter arr[3] value: 40
Enter arr[4] value: 50
Memory reallocated by 7 integers (28 bytes):
Enter arr[5] value: 60
Enter arr[6] value: 70
Memory reallocated to shrink to 3 integers (12 bytes):
Enter arr[0] value: 10
Enter arr[1] value: 20
Enter arr[2] value: 30
values in memory after reallocations:
arr[0] = 10
arr[1] = 20
arr[2] = 30
*/

