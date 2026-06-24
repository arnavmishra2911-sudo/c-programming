#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {

        if ((i * 2) <= 10)
        {
            printf("%d\n", i * 2);
        }
        if ((i + 2) <= 10)
        {
            printf("%d\n", i + 2);
        }
    }

    return 0;
}