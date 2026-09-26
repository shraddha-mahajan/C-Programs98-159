#include<stdio.h>
#include<string.h>
int main(void)
{
    char pszStr[] = "Hello,Good,Evening,;Night";
    char * pszSubStr = NULL;

    puts(pszStr);
    pszSubStr = strtok(pszStr,",;");
    while(pszSubStr != NULL)
    {
        puts(pszSubStr);
        pszSubStr = strtok(NULL,",;");
    }
    return 0;
}
// Hello,Good,Evening,;Night
// Hello
// Good
// Evening
// Night