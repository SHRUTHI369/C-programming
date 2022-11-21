#include <stdio.h>
void main(){
	char c;
	int lowercase,uppercase;
	printf("Enter the alphabet:");
	scanf("%c",&c);
	lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(!isalpha(c))
	  printf("%c is not an alphabet",c);
	else if(lowercase||uppercase)
	  printf("%c is a vowel",c);
	else
	  printf("%c is a consonant",c);
}
