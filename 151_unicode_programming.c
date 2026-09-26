#include<stdio.h>
#include<wchar.h>
#include<string.h>
int main(void)
{
    wchar_t wchChar = 'A';
    wchar_t wszStr[] = L"Hello";
    wchar_t * pwszStr = L"Hello";
    
    printf("sizeof(wchChar):\t%d\n",sizeof(wchChar));             //sizeof(wchChar):    2
    printf("sizeof(wszStr):\t%d\n",sizeof(wszStr));               //sizeof(wszStr):     12
    printf("sizeof(pwszStr):\t%d\n",sizeof(pwszStr));             //sizeof(pwszStr):    4

    printf("strlen(wchChar):\t%d\n",strlen(wszStr));              //strlen(wchChar):    1
    printf("strlen(wszStr):\t%d\n",strlen(pwszStr));              //strlen(wszStr):     1

    printf("wcslen(wszStr):\t%d\n",wcslen(wszStr));               //wcslen(wszStr):     5
    printf("wcslen(pwszStr):\t%d\n",wcslen(pwszStr));             //wcslen(pwszStr):    5
    
    return 0;

}
