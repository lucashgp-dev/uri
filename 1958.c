#include <stdio.h>

int main(){

char num[111];
long double X;

scanf("%LE",&X);

sprintf(num,"%LE",X);

if(num[0] != '-')
{
    printf("+%.4LE\n",X);}
else{
    printf("%.4LE\n",X);
}

return 0;
}