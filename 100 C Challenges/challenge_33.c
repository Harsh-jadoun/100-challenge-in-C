#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
	int num,rem,rev=0,temp,count=0;
	scanf("%d",&num);
	temp=num;
	while(num>0){
	    num=num/10;
	    count+=1;
	}
	num=temp;
	while(num>0)
	{
	    rem=num%10;
	    rev=rev+pow(rem,count);
	    num=num/10;
	}
	if(rev==temp)
	printf("%d is armstrong",temp);
	else
	printf("%d is not armstrong",temp);
	
	return 0;

}

