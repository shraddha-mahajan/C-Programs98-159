#include<stdio.h>
#include<malloc.h>
int main(void)
{
    int iPlance;
    int iColumns;
    int iRows;
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int ***pppPtr = NULL;

    printf("How many plance you want\n");
    scanf("%d",&iPlance);
    printf("How many Rows you want\n");
    scanf("%d",&iRows);
    printf("How many columns you want\n");
    scanf("%d",&iColumns);
    
    pppPtr = (int ***)malloc(iPlance * sizeof(int **));
    if(NULL == pppPtr)
    {
        printf("Memory allocation faild\n");
        return -1;
    }

    for(iCounter1 = 0;iCounter1 < iPlance; iCounter1++)
    {
        pppPtr[iCounter1] = (int **)malloc(iRows * sizeof(int *));
        if(NULL == pppPtr[iCounter1])
        {
            printf("Memory allocation is faild\n");

            for(iRows = 0;iRows < iCounter1; iRows++)
            {
                free(pppPtr[iRows]);
                free(pppPtr);
            }
            return -1;
        }

        for(iCounter2 = 0;iCounter2 < iRows;iCounter2++)
        {
            pppPtr[iCounter1][iCounter2] = (int *)malloc(iColumns * sizeof(int));

            if(NULL == pppPtr[iCounter1][iCounter2])
            {
                printf("Memory allocation is faild\n");
                for(iColumns = 0;iColumns < iCounter2;iColumns++)
                {
                    free(pppPtr[iCounter1][iColumns]);
                    free(pppPtr[iCounter1]);
                }
                for(iRows = 0; iRows < iCounter1;iRows++)
                {
                    free(pppPtr[iRows]);
                    free(pppPtr);
                }
                return -1;
            }
        }
    }

    printf("Accept 3d array values\n");
    for(iCounter1 = 0;iCounter1 < iPlance;iCounter1++)
    {
        for(iCounter2 = 0;iCounter2 < iRows;iCounter2++)
        {
            for(iCounter3 = 0;iCounter3 < iColumns;iCounter3++)
            {
                printf("Enter value pppPtr[%d][%d][%d]: ",iCounter1,iCounter2,iCounter3);
                scanf("%d",&pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    printf("values of 3d array:\n");
    for(iCounter1 = 0;iCounter1 < iPlance;iCounter1++)
    {
        for(iCounter2 = 0;iCounter2 < iRows;iCounter2++)
        {
            for(iCounter3 = 0;iCounter3 < iColumns;iCounter3++)
            {
                printf("pppPtr[%d][%d][%d] = %d\t",iCounter1,iCounter2,iCounter3,pppPtr[iCounter1][iCounter2][iCounter3]);   
            }
            printf("\n");
        }
        printf("\n");
    }

    if(pppPtr != NULL)
    {
        for(iCounter1 = 0;iCounter1 < iPlance;iCounter1++)
        {
            if(NULL != pppPtr[iCounter1])
            {
                for(iCounter2=0;iCounter2<iRows;iCounter2++)
                {
                    if(pppPtr[iCounter1][iCounter2]!=NULL)
                    {
                        free(pppPtr[iCounter1][iCounter2]);
                        pppPtr[iCounter1][iCounter2]=NULL;
                    }
                }
                free(pppPtr[iCounter1]);
                pppPtr[iCounter1]=NULL;
            }
        }
        free(pppPtr);
        pppPtr=NULL;
    }

    return 0;
}  
/*
How many plance you want
2
How many Rows you want
3
How many columns you want
3
Accept 3d array values
Enter value pppPtr[0][0][0]: 12
Enter value pppPtr[0][0][1]: 10
Enter value pppPtr[0][0][2]: 20
Enter value pppPtr[0][1][0]: 30
Enter value pppPtr[0][1][1]: 40
Enter value pppPtr[0][1][2]: 50
Enter value pppPtr[0][2][0]: 60
Enter value pppPtr[0][2][1]: 70
Enter value pppPtr[0][2][2]: 80
Enter value pppPtr[1][0][0]: 90
Enter value pppPtr[1][0][1]: 11
Enter value pppPtr[1][0][2]: 13
Enter value pppPtr[1][1][0]: 14
Enter value pppPtr[1][1][1]: 15
Enter value pppPtr[1][1][2]: 16
Enter value pppPtr[1][2][0]: 17
Enter value pppPtr[1][2][1]: 18
Enter value pppPtr[1][2][2]: 19
values of 3d array:
pppPtr[0][0][0] = 12    pppPtr[0][0][1] = 10    pppPtr[0][0][2] = 20
pppPtr[0][1][0] = 30    pppPtr[0][1][1] = 40    pppPtr[0][1][2] = 50
pppPtr[0][2][0] = 60    pppPtr[0][2][1] = 70    pppPtr[0][2][2] = 80

pppPtr[1][0][0] = 90    pppPtr[1][0][1] = 11    pppPtr[1][0][2] = 13
pppPtr[1][1][0] = 14    pppPtr[1][1][1] = 15    pppPtr[1][1][2] = 16
pppPtr[1][2][0] = 17    pppPtr[1][2][1] = 18    pppPtr[1][2][2] = 19
*/