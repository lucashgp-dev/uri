#include <stdio.h>


int main(){
int tamanho;
char L[100000];

gets(L);

tamanho =  strlen(L);
if (tamanho>80)  printf("NO\n");
else printf("YES\n");


return 0;
}

