#include <stdio.h>
int main( ){
 int L,V,i,maior;

while(scanf("%d",&L)!=EOF){
    int  vetor[L];
    
    for(i=0;i<L;i++){
        scanf("%d",&V);
        vetor [i]=V;}
        
    maior=vetor[0];
    for(i=0;i<L;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }

 if(maior<10){
    printf("1\n");}

else if(maior<20){
    printf("2\n");}

else{
    printf("3\n");}

}
return 0;

}
