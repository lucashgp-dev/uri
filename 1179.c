#include<stdio.h>

int main(){

   int par[5], impar[5], i,j, V,contPar = 0, contImpar = 0;

  for(i=0;i<15;i++){
    scanf("%d",&V);
    

    if(V%2 == 0){
      par[contPar] = V; 
      contPar++;
      
      if(contPar==5){
        for(j=0;j<5;j++){
          printf("par[%d] = %d\n",j,par[j]);
          contPar=0;}  
    }}
  
  
    else{
      impar[contImpar] = V;
      contImpar++;
      if (contImpar==5){
        for(j=0;j<5;j++){
          printf("impar[%d] = %d\n",j,impar[j]);
          contImpar=0;}
      }}}

  for(i=0;i<contImpar;i++){
     printf("impar[%d] = %d\n",i,impar[i]);
  }
 for(i=0;i<contPar;i++){
     printf("par[%d] = %d\n",i,par[i]);
  }

   
    
return 0;}