#include <stdio.h>

int main( ){
   char A[20],B[20];
   int i;

    scanf("%s %s",&A,&B);
    
    while(i<20){
        if(A[i]<B[i]){printf("%s\n%s\n",A,B); break;}
        if(A[i]>B[i]){printf("%s\n%s\n",B,A);break;}
        i++;
    }

   return 0;
}
