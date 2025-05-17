#include <stdio.h>

int main() {
	int P_A,rate,Time;
	scanf("%d %d %d",&P_A,&rate,&Time);
	int S_I=(P_A*rate*Time)/100;
	printf("%d",S_I);
	return 0;
}

