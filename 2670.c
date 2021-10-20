#include <stdio.h>
int main( ){

int A1,A2,A3;
int caso1,caso2,caso3;
int menor;

scanf("%d",&A1);
scanf("%d",&A2);
scanf("%d",&A3);

caso1=(A2*2) + (A3*4);
caso2=(A1*2) + (A3*2);
caso3=(A2*2) + (A1*4);

menor=caso1;
if(caso2<menor){menor=caso2;}
if(caso3<menor){menor=caso3;}

printf("%d\n",menor);
return 0;
}

