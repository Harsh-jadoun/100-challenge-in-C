#include <stdio.h>

int main() {
	// your code goes here
    int n,a=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        printf(" ");
        for(int j=0;j<=i;j++)
        printf("%d ",a++);
        for(int j=1;j<=i;j++)
        printf("%d ",a++);
        printf("\n");
    }
    return 0;
    
}
