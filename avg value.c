#include<stdio.h>
int main(){
	int n,i;
	float num[100],sum=0.0,avg;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>100||n<1){
		printf("Enter the number between 1-100\n");
		printf("Enter number again: ");
		scanf("%d",&n);
	}
	printf("Enter the elements:\n");
	for(i = 0; i < n; ++i){
		scanf("%f", &num[i]);
		sum += num[i];
	}
	avg=sum/n;
	printf("The average value is: %.2f",avg);
	return 0;
}
