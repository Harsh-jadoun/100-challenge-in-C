#include <stdio.h>

int main() {
	// your code goes here
    int num1;
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    if(num1%i==0)
    {
    printf("%d,",i);
    }
    printf (" are the factors.");
    return 0;
}

