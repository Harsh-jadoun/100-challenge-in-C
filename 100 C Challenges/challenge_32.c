#include <stdio.h>

int main() {
	// your code goes here
	int num,rem,rev=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
	    rem=num%10;
	    rev=rev*10+rem;
	    num=num/10;
	}
	if(rev==temp)
	printf("%d is pallindrome",rev);
	else
	printf("%d is not pallindrome",rev);
	
	return 0;

}

