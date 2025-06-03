#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b); 
    printf("\nBefore swapping a=%d, b=%d",a,b); //Before swapping
   //swapping variables without using third variable
    a = a+b; 
    b= a-b;
    a= a-b;
   printf("\nAfter swapping a=%d, b=%d",a,b);
    return 0;
}
