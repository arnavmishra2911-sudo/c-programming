#include<stdio.h>
#include<math.h>

int main(){
   int day;
   printf("Enter the day number (1-7): ");
   scanf("%d",&day);
   switch(day){
case 1:printf("Monday \n");
break;
case 2:printf("Tuesday \n");
break;
case 3:printf("Wednesday \n");
break;
case 4:printf("thursday \n");
break;
case 5:printf("friday \n");
break;
case 6:printf("saturaday \n");
break;
case 7:printf("sunday \n");
break;
default:printf("invalid day");

   }



return 0;
}