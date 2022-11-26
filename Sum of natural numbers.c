#include<stdio.h>
int addNum(int n){
	if(n!=0){
		return n+addNum(n-1);
	}
	else
	    return n;
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Sum of natural numbers = %d",addNum(n));
	return 0;
}
