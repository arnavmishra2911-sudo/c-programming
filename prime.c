#include<stdio.h>
#include<math.h>

int main(){
for(int i = 1; i <= 5; i++) {      // Outer loop

    for(int j = 1; j <= i; j++) {  // Inner loop
        printf("*");
    }

    printf("\n");
}
 return 0;
}