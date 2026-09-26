#include<stdio.h>
#include<malloc.h>
int main(void)
{
    int iRows;
    int iColumns;
    int iCounter1;
    int  iCounter2;
    int **ppPtr = NULL;

    printf("How many Rows you want\n");
    scanf("%d",&iRows);
    printf("How many Columns you want\n");
    scanf("%d",&iColumns);

    ppPtr = (int **)malloc(iRows * (sizeof(int *)));
    if(NULL == ppPtr)
    {
        printf("Memory allocation faild\n");
        return -1;
    }

    for(iCounter1 = 0;iCounter1 < iRows;iCounter1++)
    {
        ppPtr[iCounter1] = (int *)malloc(iColumns * sizeof(int));

        if(NULL == ppPtr[iCounter1])
        {
            printf("Memory allocation faild\n");

            for(iRows = 0; iRows < iCounter1;iRows++)
            free(ppPtr[iRows]);
            free(ppPtr);
            return -1;
        }
    }    
    
    for(iCounter1 = 0;iCounter1 < iRows;iCounter1++)
    {
        for(iCounter2 = 0;iCounter2 < iColumns;iCounter2++)
        {
            printf("[%d][%d]= ",iCounter1,iCounter2);
            scanf("%d",&ppPtr[iCounter1][iCounter2]);
        }
            
    }
       
    printf("2d dynamic array is:\n");
    for(iCounter1 = 0;iCounter1 < iRows;iCounter1++)
    {
        for(iCounter2 = 0;iCounter2 < iColumns;iCounter2++)
        {
            printf("%d\t",ppPtr[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    for(iCounter1 = 0;iCounter1 < iRows; iCounter1++)
    {
        free(ppPtr);
        ppPtr[iCounter1] = NULL;
    }

    free(ppPtr);
    ppPtr = NULL;

    return 0;

}

/*
How many Rows you want
3
How many Columns you want
3
[0][0]= 1
[0][1]= 2
[0][2]= 3
[1][0]= 4
[1][1]= 5
[1][2]= 6
[2][0]= 7
[2][1]= 8
[2][2]= 9
2d dynamic array is:
1       2       3
4       5       6
7       8       9
*/