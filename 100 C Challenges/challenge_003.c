#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b);
    int sub = a-b; //Calculating difference between two numbers
    printf("\nsub = %d",sub); //Printing difference of two numbers
    return 0;
}
