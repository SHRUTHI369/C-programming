#include<stdio.h>
void cyclicSwap(int *n1,int *n2,int *n3){
	int temp;
	temp=*n2;
	*n2=*n1;
	*n1=*n3;
	*n3=temp;	
}
int main(){
	int a,b,c;
	printf("Enter the elements:");
	scanf("%d %d %d",&a,&b,&c);
	printf("Value before swapping:\n");
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	cyclicSwap(&a,&b,&c);
	printf("Value After swapping:\n");
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	return 0;
	
}
