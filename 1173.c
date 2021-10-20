#include <stdio.h>

int main(){
	int N[10],V,i,j;
	scanf("%d",&V);
	
	N[0]=V;
	
		
	for (j =1;j<10;j++){
		N[j]= V+V;
		V=N[j];
		}
	
	
	for (i =0;i<10;i++){
		printf("N[%d] = %d\n",i,N[i]);}
	
	
	return 0;
	

}