#include <stdio.h>

int main() {
	// your code goes here
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	for(int i=num1;i>=1;i--)
	{
	    if(num1%i==0)
	    {
	        if(num2%i==0)
	        {
	        printf("%d",i);
	        break;
	        }
	    }
	}
	return 0;
}

