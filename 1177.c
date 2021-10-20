#include <stdio.h>

int main (){
	int T,T0,N[1000],i;
	T0=0;
	
	while (T<2 || T>50){
		scanf("%d",&T);}
	
	for (i=0;i<	1000;i++){	
		if (T0==T){
			T0=0;}
		N[i] =T0;
		T0++;}	
		
	for (i=0;i<1000;i++){
	
		printf("N[%d] = %d\n",i,N[i]);
		}
    
    return 0;
    
    
}
