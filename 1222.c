//1222
#include <stdio.h>
#include <string.h>

int main(){
    // N PALAVRA
    // L LINHA
    // C CARACTERES

    int n,l,c;
    int i,x;
    char palavra[71]; 
    int paginas,linhas,letras;

    while(scanf("%d %d %d",&n,&l,&c)!= EOF){

        scanf("%s",palavra);
        x = strlen(palavra);

        paginas = linhas = 1;

        for(i = 0; i < n-1; i++){

            scanf("%s",palavra);
            letras = strlen(palavra);

        //verifica se duas palavras cabem na mesma linha    
            if((x + letras + 1 ) <= c ){
                x += letras + 1;}

            else { 
                linhas++;
            //verifica se a quantidade de linhas é maior que o determinado
                if(linhas  > l){
                    paginas++;
                    linhas = 1;}

                 x = letras;
                
            }
        }

    printf("%d\n",paginas);    
    }

    return 0;
}