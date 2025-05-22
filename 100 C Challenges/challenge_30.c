#include <stdio.h>

int main() {
	// your code goes here
    int n,sum;
    long int result= 1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        result *= i;
    }
    printf("%ld",result);
    return 0;    
    
}

