#include<stdio.h>
int main(void)
{
    FILE *fp = NULL;         //something wrong
    int iNoOfChars = 0;
    int iNoOfSpaces = 0;
    int iNoOfTabs = 0;
    int iNoOfLines = 0;
    char chChar;

    fp = fopen("158_chars_spaces_tabs_newline_count.txt","r");

    if(NULL == fp)
    {
        printf("cant open file\n");
        return -1;
    }
    while(1)
    {
        chChar = fgetc(fp);
        if(chChar == EOF)
        break;

        iNoOfChars++;

        if(chChar == ' ')
        iNoOfSpaces++;

        else if(chChar == '\t')
        iNoOfTabs++;

        else if(chChar == '\n')
        iNoOfLines++;
    }
    fclose(fp);
    fp = NULL;

    printf("\nNo of Characters are %d\n",iNoOfChars);
    printf("\nNo of Spaces are %d\n",iNoOfSpaces);
    printf("\nNo of Tabs are %d\n",iNoOfTabs);
    printf("\nNo of Lines are %d\n",iNoOfLines);

    return 0;

}