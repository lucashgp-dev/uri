#include <stdio.h>

int main(){

  int N,i;
  float edf,C,P;
  edf=0;

  scanf("%d",&N);

  while(i<N){
        scanf("%f %f",&C,&P);
        if (((1<=C)&&(C<=5) && (C<=P)&&(P<=100))){
                edf += C/P;}
        else{
            printf("FAIL\n");
            break;}

  i++;}
       if (((1<=C)&&(C<=5) && (C<=P)&&(P<=100))){
       if (edf<=1){
        printf("OK\n");}
        else{printf("FAIL\n");}}



return 0;
}
