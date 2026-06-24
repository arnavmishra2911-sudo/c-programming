#include<stdio.h>

  int main(){
    int captcha=123;
    int input;

    
    while(1){
        printf("Enter Captcha %d: ", captcha);
        if (scanf("%d", &input) != 1) {
            return 1;
        }

        if (input == captcha) {
            printf("Verified!\n");
            break;
        } else {
            printf("Incorrect Captcha. Try again.\n");
        }
    }
    return 0;
}
  