#include <stdio.h>

int main() {
	// your code goes here
    int days;
    scanf("%d",&days);
    int year= days/365;
    int month= (days-365*year)/30;
    int weak = (days-365*year-30*month)/7;
    printf("Year=%d,month=%d,week=%d",year,month,weak);
    return 0;
}

