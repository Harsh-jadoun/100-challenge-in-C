#include<stdio.h>
#include<math.h>
void main() {
int num,num2;
printf("Give any number");
scanf("%d",&num);
printf("Give the power: ");
scanf("%d",&num2);
int Result = pow(num,num2);
printf("Answer = %d",Result);
return 0;
}
