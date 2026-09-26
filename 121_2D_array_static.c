#include<stdio.h>
#define MAX 10
int main(void)
{
    int iRow;
    int iCol;
    int iCounter1;
    int  iCounter2;
    int arr[MAX][MAX];

    printf("How many Rows you want(<%d)\n",MAX);
    scanf("%d",&iRow);
    printf("How many Columns you want(<%d)\n",MAX);
    scanf("%d",&iCol);

    for(iCounter1=0;iCounter1<iRow;iCounter1++)
    {
        for(iCounter2=0;iCounter2<iCol;iCounter2++)
        {
            printf("[%d][%d]= ",iCounter1,iCounter2);
            scanf("%d",&arr[iCounter1][iCounter2]);
        }
        printf("\n");
    }

    printf("2D Array is:\n");
    for(iCounter1=0;iCounter1<iRow;iCounter1++)
    {
        for(iCounter2=0;iCounter2<iCol;iCounter2++)
        {
            printf("arr[%d][%d]=[%d]\t",iCounter1,iCounter2,arr[iCounter1][iCounter2]);
        }
        printf("\n");
    }
    return 0;

}

/*
How many Rows you want(<10)
3
How many Columns you want(<10)
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

2D Array is:
arr[0][0]=[1]   arr[0][1]=[2]   arr[0][2]=[3]
arr[1][0]=[4]   arr[1][1]=[5]   arr[1][2]=[6]
arr[2][0]=[7]   arr[2][1]=[8]   arr[2][2]=[9]
*/
