#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b); //taking input two numbers
    printf("\nBefore swapping a=%d, b=%d",a,b); // Beffore swapping values of a and b
    //Logic of swapping two numbers using third variable
    int c = a; 
    a = b;
    b = c;
   printf("\nAfter swapping a=%d, b=%d",a,b); //After swapping values of a and b
    return 0;
}
