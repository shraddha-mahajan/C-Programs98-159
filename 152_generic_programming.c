#include<stdio.h>
#include<tchar.h>
int main(void)
{
    TCHAR chChar = 'A';
    TCHAR szStr[] = _TEXT("Hello");
    TCHAR * pszStr = _T("Hello");

    printf("sizeof(wchChar):\t%d\n",sizeof(chChar));             //sizeof(wchChar):     1
    printf("sizeof(wszStr):\t%d\n",sizeof(szStr));               //sizeof(wszStr):      6
    printf("sizeof(pwszStr):\t%d\n",sizeof(pszStr));             //sizeof(pwszStr):     4

    printf("_tcslen(szStr):\t%d\n",_tcslen(szStr));             //_tcslen(szStr):       5
    printf("_tcslen(pszStr):\t%d\n",_tcslen(pszStr));           //_tcslen(pszStr):      5
    return 0;
}