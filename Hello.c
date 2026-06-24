#include <stdio.h>

int main()
{
   for (int i = 0; i <= 20; i++)
   {
      if (i % 2 == 0)
      {
         printf("%d", i * 2);
      }
      else if (i % 2 != 0)
      {
         printf("%d", i + 2);
      }
      else if (i >= 10)
      {
         break;
      }
      return 0;
   }
}