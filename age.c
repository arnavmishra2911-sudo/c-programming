#include <stdio.h>
//make a program on loop or  if or else on taking an input and if the input is in even multiply by 2 or if it is odd add by 2 adn if number is greater or equal to 10 terminate it 
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num>=10){
        printf("program terminated\n");
        return 0;
    }
    if(num % 2 == 0) {
    printf("%d x 2 = %d\n", num, num * 2);
    }
    else {
    printf("%d + 2 = %d\n", num, num + 2);
    }

    return 0;
}