#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
	    int count=0;
	for(int j=1;j<=i;j++)
    {	
    if(i%j==0)
	count+=1;
    }
	if(count==2)
	printf("%d,",i);
	}
	
	return 0;
}

