#include <stdio.h>

int main() {
	// your code goes here
    float grade;
    scanf("%f",&grade);
    if(grade>=90)
    printf("Grade A");
    else if(grade>=80)
    printf("Grade B");
    else if(grade>=70)
    printf("Grade C");
    else if(grade>=60)
    printf("Grade E");
    else 
    printf("Grade F");
    return 0;
}

