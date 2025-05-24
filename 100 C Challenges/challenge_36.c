#include <stdio.h>

int main() {
	// your code goes here
	int a,b,n,i;
	a=0;
	b=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    printf("%d,",a);
	    int sum=a+b;
	    a=b;
	    b=sum;
	}
	return;

}

