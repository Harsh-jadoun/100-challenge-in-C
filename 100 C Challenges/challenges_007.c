#include<stdio.h>
int main(){
    int a,b;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swapping a=%d, b=%d",a,b);
    int c = a;
    a = b;
    b = c;
   printf("\nAfter swapping a=%d, b=%d",a,b);
    return 0;
}
