#include <stdio.h>

// Defualt of all variable types
// Garbage values
// Static
// Skip 10, perform operation between 5-15(inclusivly), imp: loop 1-20
int main()
{

    for (int i = 1; i <= 20; i++) // loop
    {   

        int result; // Declaration

        if (i < 5)
        {
        }
        if (result == 10)
        {
            continue;    
        }
        if (i % 2) // condition
        {
            result = i + 2;
        }
        else
        {
            result = i * 2;
        }

        if (result == 10)
        {
            continue;
        }
        if (result >= 15)
        {
            printf("Program terminated.\n");
            break;
        }

        printf("%d\n", result);
    }

    return 0;
} 
