#include <stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
    int iAns;
    
    if(argc != 3)
    {
        printf("invalid Argument: $143_command_line_arguments_addition No1 No2\n");
        return 0;
    }
    
    iAns = atoi(argv[1]) + atoi(argv[2]);     // 10 20
    printf("Addition is %d\n",iAns);         //Addition is 30

    return 0;
}
