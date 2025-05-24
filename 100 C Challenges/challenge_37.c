
#include <stdio.h>

int main() {
	// your code goes here
	int num,count=0,i;
	scanf("%d",&num);
	while(num>0)
	{
	    count=count+1;
	    num=num/10;
	}
	printf("%d",count);
	return 0;
}

