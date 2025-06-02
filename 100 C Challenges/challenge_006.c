#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b);
    int rem = a%b; //calculating remainder
    printf("\n Remainder= %d",rem); //printing remainder
    return 0;
}
