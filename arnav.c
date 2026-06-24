#include <stdio.h>

int main(){

    int num;
    printf("Enter number");
        scanf("%d",&num);

      //  for(int i = 1;i<=20;i++){

            
                    if(num % 2 == 0){
                        printf("%d",num * 2);
                    }
                    else if(num%2 !=0){
                            printf("%d",&num + 2);
                    }
                    
                    else if (num>=10){
                      printf("Program terminated \n");
                    }
        // }

return 0;
}
