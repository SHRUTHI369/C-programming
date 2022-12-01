#include<stdio.h>
int main(){
	int n,i;
	double *data;
	printf("Enter total no. of elements:");
	scanf("%d",&n);
	data=(double *)calloc(n,sizeof(double));
	if(data==NULL){
		printf("Memory not allocated");
		exit(0);
	}
	printf("Enter the numbers: ");
	for(i = 0 ; i<n ; ++i){
		
		scanf("%lf",data + i);
	}
	for(i=1;i<n;++i){
		if(*data<*(data+i)){
			*data=*data+i;
		}
	}
	printf("Largest number = %.2lf",*data);
	free(data);
	return 0;
	
}
