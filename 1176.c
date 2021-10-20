#include <stdio.h>

int main(){

	unsigned long long int f[61];
	int T,i,N;
	
	f[0]=0;
	f[1]=1;

	for(i=2;i<61;i++){
		f[i]=f[i-1] + f[i-2];}
		
	scanf("%d",&T);
	
	for(i=0;i<T;i++){
	scanf("%d",&N);
	printf("Fib(%d) = %llu\n",N,f[N]);		}

	return 0;	

}
