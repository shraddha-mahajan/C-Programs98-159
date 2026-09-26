#include<stdio.h>
#define MAX 10
int main(void)
{
    int iPlance;
    int iColumns;
    int iRows;
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int ***pppPtr
    
    printf("How many plance you want (<%d)\n",MAX);
    scanf("%d",&iPlance);
    printf("How many Rows you want (<%d)\n",MAX);
    scanf("%d",&iRows);
    printf("How many columns you want (<%d)\n",MAX);
    scanf("%d",&iColumns);

    for(iCounter1 = 0;iCounter1 < iPlance;iCounter1++)
    {
        for(iCounter2 = 0;iCounter2 < iRows;iCounter2++)
        {
            for(iCounter3 = 0;iCounter3 < iColumns;iCounter3++)
            {
                printf("arr[%d][%d][%d]= ",iCounter1,iCounter2,iCounter3);
                scanf("%d",&arr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    for(iCounter1 = 0;iCounter1 < iPlance;iCounter1++)
    {
        for(iCounter2 = 0;iCounter2 < iRows;iCounter2++)
        {
            for(iCounter3 = 0;iCounter3 < iColumns;iCounter3++)
            {
                printf("arr[%d][%d][%d]=%d\t",iCounter1,iCounter2,iCounter3,arr[iCounter1][iCounter2][iCounter3]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
/*
How many plance you want (<10)
2
How many Rows you want (<10)
3
How many columns you want (<10)
3
arr[0][0][0]= 1
arr[0][0][1]= 2
arr[0][0][2]= 3
arr[0][1][0]= 4
arr[0][1][1]= 5
arr[0][1][2]= 6
arr[0][2][0]= 7
arr[0][2][1]= 8
arr[0][2][2]= 9
arr[1][0][0]= 11
arr[1][0][1]= 12
arr[1][0][2]= 13
arr[1][1][0]= 14
arr[1][1][1]= 15
arr[1][1][2]= 16
arr[1][2][0]= 17
arr[1][2][1]= 18
arr[1][2][2]= 19
arr[0][0][0]=1  arr[0][0][1]=2  arr[0][0][2]=3
arr[0][1][0]=4  arr[0][1][1]=5  arr[0][1][2]=6
arr[0][2][0]=7  arr[0][2][1]=8  arr[0][2][2]=9

arr[1][0][0]=11 arr[1][0][1]=12 arr[1][0][2]=13
arr[1][1][0]=14 arr[1][1][1]=15 arr[1][1][2]=16
arr[1][2][0]=17 arr[1][2][1]=18 arr[1][2][2]=19
*/