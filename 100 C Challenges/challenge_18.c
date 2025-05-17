#include <stdio.h>

int main() {
	float P_A,rate,Time;
	scanf("%f %f %f",&P_A,&rate,&Time);
	float S_I=(P_A*rate*Time)/100;
	printf("%f",S_I);
	return 0;
}

