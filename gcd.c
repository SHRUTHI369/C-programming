#include<stdio.h>
gcd(int n1,int n2){
	if(n2!=0){
		return(n1,n1%n2);
	}
	else
	   return n1;
}
int main(){
	int n1,n2;
	printf("Enter the two integers:");
	scanf("%d %d",&n1,&n2);
	printf("GCD of %d and %d is %d",n1,n2,gcd(n1,n2));
	return 0;
}
