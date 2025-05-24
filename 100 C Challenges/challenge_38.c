#include <stdio.h>

int main() {
	// your code goes here
	int num,rem,sum=0,i;
	scanf("%d",&num);
	while(num>0)
	{
	    rem=num%10;
	    sum=sum+rem;
	    num=num/10;
	}
	printf("%d",sum);
	return 0;
}

