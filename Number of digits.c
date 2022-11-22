#include<stdio.h>
int main(){
	long long n;
	int count=0;
	printf("Enter the value:");
	scanf("%lld",&n);
	do{
		n/=10;
		++count;
	}while(n!=0);
	printf("Number of digits:%d",count);
	return 0;
}
