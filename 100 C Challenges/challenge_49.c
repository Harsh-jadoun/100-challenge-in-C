#include <stdio.h>

int main() {
	// your code goes here
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int mul = num1*num2;
    for(int i=1;i<=mul;i++)
    if( i%num1==0&&i%num2==0)
    {
    printf("%d is lcm of these numbers",i);
    break;
    }
    return 0;
}

