#include<stdio.h>

int main(){
int age =1;
    printf("your age is %d",age);
//so age will be visible inside main it is local scope

    if (age == 18) {
    int op;
        printf("adult\n");
    }
//here in if function where we used {} it is called block scope where int op will only work inside the {} of if function


//global scope visible everywhere
    return 0;
}
//so age will be visible inside main it is local scope