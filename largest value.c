#include<stdio.h>
int main(){
	int n,i;
	double num[100];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	while(n>100||n<1){
		printf("Enter the number between 1-100\n");
		printf("Enter number again: ");
		scanf("%d",&n);
	}
	printf("Enter the values:\n");
	for(i=0;i<n;++i){
		scanf("%lf",&num[i]);
	}
	for(i=1;i<n;++i){
		if(num[0]<num[i]){
			num[0]=num[i];
		}
	}
	printf("The largest value in the array is %.2lf",num[0]);
	return 0;
}
