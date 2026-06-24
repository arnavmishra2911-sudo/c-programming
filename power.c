#include<stdio.h>
#include<math.h>
    int main(){

        int base,power;
        int result=1;
        printf("enter base");
        scanf("%d\n",&base);

        printf("enter power\n");
        scanf("%d",&power);

           for(int i=1;i<=power;i++){
            result=result*base;
    }
    printf("%d raised to the power %d=%d\n , base, power ,result");
        return 0;
    }