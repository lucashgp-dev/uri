//QUESTÃO 2049
#include <stdio.h>
#include <string.h>


int main (){
    int cont = 1;
    char painel[300001], assinatura[10];

    while(1){

        scanf("%s", assinatura);

        if(strcmp(assinatura,"0") == 0)
            break;

         if (cont > 1)
            printf("\n");

        scanf("%s",painel);

        if (strstr(painel, assinatura)){
            printf("Instancia %d\n", cont);
            printf("verdadeira\n");    
                                                        }
        else{
            printf("Instancia %d\n", cont);
            printf("falsa\n");                        }


            cont++;                            

        }
        

    return 0;
}