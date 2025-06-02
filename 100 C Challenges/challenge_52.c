#include <stdio.h>

int main() {
	// your code goes here
	char a[10];
	int vowel=0,consonant=0;
	scanf("%s",a);
    for(int i=0;i<=100;i++)
 {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    vowel+=1;
    else
    consonant+=1;
}
    printf("Vowels are:-%d\n",vowel);
    printf("Consonant are:-%d",consonant);
    return 0;
    
}

