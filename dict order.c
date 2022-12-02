#include<stdio.h>
#include <string.h>
int main(){
	int n,i,j;
	char str[5][100],temp[100];
	
	printf("Enter 5 words:\n");
	for (i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }
	for(i=0;i<5;++i){
		for(j=i+1;j<5;++j){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	printf("\nDictionar order of strings : \n");
	for(i=0;i<5;++i){
		fputs(str[i],stdout);
	}
	return 0;
}
