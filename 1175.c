#include <stdio.h>
/*N[i] = Y*/
int main(){
	int N[20],i,j,troca;
	
	//entrada
	
	for (i=0;i<20;i++){
		scanf("%d",&N[i]);
	}
	
	//troca
	j=19;
	for (i=0;i<10;i++){	
		troca=N[i];
		N[i]=N[j];
		N[j] =troca;
		j--;}
	

	// imprimir
	for (i=0;i<20;i++){		
		printf("N[%d] = %d\n",i,N[i]);	
	}

	return 0;
	

}