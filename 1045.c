#include <stdio.h>
#include <math.h>

int main(){
	double A,B,C,maior;
	scanf("%lf %lf %lf",&A,&B,&C);
	
	maior = A;
	
	if(B>maior){
	maior=B;B=A;A=maior; }
	
	if(C>maior){
	maior=C;C=A;A=maior; }

	if (A>= (B+C)){
		printf("NAO FORMA TRIANGULO\n");}	
	
	else{
		if (A*A == B*B+C*C){
		printf("TRIANGULO RETANGULO\n");}
		
	if (A*A > B*B+C*C){
		printf("TRIANGULO OBTUSANGULO\n");}
	
	if (A*A < B*B+C*C){
		printf("TRIANGULO ACUTANGULO\n");}

	if (A==B && B==C && C==A ){
			printf("TRIANGULO EQUILATERO\n");}

	else {
		if (A==B || B==C || C==A) {
				printf("TRIANGULO ISOSCELES\n");}
	}			
	}	
	

	return 0;
}