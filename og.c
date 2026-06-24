#include<stdio.h>

// gcc is gnu c compiler which convert human language to computer language to execute code its fullform is GNU Compiler Collection
int main(){ for (int i = 1; i <= 20; i++)
{ 
    if (i < 5)
        continue;

    int result;

    if (i % 2)
        result = i + 2;
    else
        result = i * 2;

    if (result == 10)
        continue;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        

    if (result >= 15)
    {
        printf("Program terminated.\n");
        break;
    }

    printf("%d\n", result);
}
return 0;
}
//constant values are those values which are same while running code
