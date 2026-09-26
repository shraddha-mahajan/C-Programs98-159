#include<stdio.h>
int main(void)
{
    FILE *fp = NULL;
    char chChar;

    fp = fopen("print_characters.txt","r");

    if(NULL == fp)
    {
        printf("\nCant open file");
        return -1;
    }

    while(1)
    {
        if((chChar = getc(fp)) == EOF)
        break;
        else
        printf("%c",chChar);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}


// Hello Good Morning