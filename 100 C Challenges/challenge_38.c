#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
	int num,count=0;
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	if(num%i==0)
	count+=1;
	if(count==2)
	printf("It is a prime number");
	else
	printf("It is not a prime number");
	
	return 0;
}

