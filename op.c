#include <stdio.h>

int main()
{

    int num;

for(int i = 2; i <= 20; i += 2)    {
        // printf("Enter a number: ");
        // scanf("%d", &num);

        if (i <= 10)
         {
            printf("Program terminated.\n");
            break;
        }
         if (i % 2 == 0)
        {
            printf("Result = %d\n", i * 2);
        }
        else if (i % 2 != 0)
        {
            printf("Result = %d\n", i + 2);
        }
    }

    return 0;
}