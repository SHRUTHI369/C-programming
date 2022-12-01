#include <stdio.h>
int main(){
	char s1[50],s2[50];
	printf("Enter the string s1: ");
	scanf("%s",&s1);
	printf("Enter the string s2: ");
	scanf("%s",&s2);
	int length,j;
	length=0;
	while(s1[length]!='\0') ++length;
	for(j=0;s2[j]!='\0';++j,++length){
		s1[length]=s2[j];
	}
	s1[length]='\0';
	printf("After concatenation: ");
	puts(s1);
	
	return 0;
}
