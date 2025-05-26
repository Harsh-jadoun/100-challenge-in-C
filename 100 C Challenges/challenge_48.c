#include <stdio.h>

int main() {
	// your code goes here
    int n,a=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        printf("%d x %d = %d\n",i,j,i*j);
        printf("\n");
        
    }
    return 0;
    
}
