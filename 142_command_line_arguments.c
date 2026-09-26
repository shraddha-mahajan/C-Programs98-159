#include<stdio.h>
int main(int argc, char* argv[])
{
    int iCounter;
    printf("Argument count is: %d\n",argc);//Argument count is: 5

    puts("Argument values are:\n");//Argument values are:
    for(iCounter = 0; iCounter < argc; iCounter++)
    puts(argv[iCounter]);

    return 0;
}
// C:\Users\mahaj\OneDrive\Desktop\C\142_command_line_arguments.exe
// demo
// hello
// 10
// 20