#include<stdio.h>
int main(){
	int n,i,T1,T2;
	T1=0;
	T2=1;
	printf("Enter the number:");
	scanf("%d",&n);
	int nextTerm = T1+T2;
	printf("Fibonacci series : %d, %d, ",T1,T2);
	for(i=3;i<=n;i++){
		printf("%d, ",nextTerm);
		T1=T2;
		T2=nextTerm;
		nextTerm=T1+T2;
	}
	return 0;
}
