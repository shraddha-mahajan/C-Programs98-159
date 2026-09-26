#include<stdio.h>
enum CIRCUIT{series = 1, parallel = 2};
enum SWITCH{off, on};

int main(void)
{
    enum CIRCUIT ckt;
    enum SWITCH s1, s2;

    printf("Enter circuit you want?(series = 1, parallel = 2):\t");
    scanf("%d",&ckt);

    printf("Enter two switches (off = 0, on = 1):\t");
    scanf("%d%d", &s1, &s2);

    if(ckt == series)
    {
        if(s1 == on && s2 == on)
        
        printf("Bulb will be glow\n");
        else
        printf("Bulb will not glow\n");
    }    
    else
    {
    if(s1 == on || s2 == on)
    printf("Bulb will glow\n");
    else
    printf("Bulb will not glow\n");
    }
    return 0;   
}

/*
Enter circuit you want?(series = 1, parallel = 2):      1
Enter two switches (off = 0, on = 1):   1 0
Bulb will not glow

Enter circuit you want?(series = 1, parallel = 2):      2
Enter two switches (off = 0, on = 1):   1 1
Bulb will glow

Enter circuit you want?(series = 1, parallel = 2):      2
Enter two switches (off = 0, on = 1):   1 0
Bulb will glow


*/