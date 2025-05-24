#include <stdio.h>

int main() {
	// your code goes here
	int num,rem,pro=1,i;
	scanf("%d",&num);
	while(num>0)
	{
	    rem=num%10;
	    pro=pro*rem;
	    num=num/10;
	}
	printf("%d",pro);
	return 0;
}

