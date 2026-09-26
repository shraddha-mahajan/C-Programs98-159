#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    int iAns;
    int iCounter;

    iAns = 0;
    for(iCounter = 1;iCounter < argc; iCounter++)
    {
        iAns = iAns + atoi(argv[iCounter]);
        printf("Addition is: %d\n",iAns);
    }
    return 0;
    
}

/*
./144_command_line_arguments_addition_n_values 10 20 30 40 50

Addition is: 10
Addition is: 30
Addition is: 60
Addition is: 100
Addition is: 150
*/