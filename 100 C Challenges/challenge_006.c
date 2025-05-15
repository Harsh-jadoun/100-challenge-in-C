#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b);
    int rem = a%b;
    printf("\n Remainder= %d",rem);
    return 0;
}
