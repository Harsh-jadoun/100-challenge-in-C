#include <stdio.h>
#include<math.h>

int main() {
	float P_A,rate,Time;
	scanf("%f %f %f",&P_A,&rate,&Time);
	float mid= (1+rate/100);
	float C_I=P_A*pow(mid,Time);
	printf("%f",C_I);
	return 0;
}

