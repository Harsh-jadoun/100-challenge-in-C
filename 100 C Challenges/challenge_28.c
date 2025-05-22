#include <stdio.h>

int main() {
	// your code goes here
    int num;
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        int mul = num*i;
        printf("%d * %d = %d\n",num,i,mul);
    }
    return 0;
}

