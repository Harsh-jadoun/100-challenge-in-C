#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b); //Taking input two numbers
    int mul = a*b;  //Calaculating multiplication
    printf("\nmultiply = %d",mul); //Printing multiplication
    return 0;
}
