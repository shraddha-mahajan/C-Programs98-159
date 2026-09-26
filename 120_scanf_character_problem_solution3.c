#include<stdio.h>
int main(void)
{
    char chChar1;
    char chChar2;
    char chTemp;

    printf("Enter character 1:\t");
    scanf("%c",&chChar1);
    
    printf("Enter character 2:\t");
    scanf("%c%c",&chTemp,&chChar2);

    printf("character1 is: %c\n",chChar1);
    printf("character2 is: %c\n",chChar2);

    return 0;
}
/*
Enter character 1:      A
Enter character 2:      B
character1 is: A
character2 is: B
*/