#include<stdio.h>
int main(){
	char s1[100],s2[100],i;
	printf("Enter the string: ");
	fgets(s1,sizeof(s1),stdin);
	for(i=0;s1[i]!='\0';++i){
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("The copied string s2 is %s",s2);
	return 0;
}
