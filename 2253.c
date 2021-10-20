#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

    int i,cont=0, caractere=0, maiuscula=0, minuscula=0,tamanho=0,tam;
    char senha[1000];

     while (scanf(" %[^\n]", senha) != EOF){
        tam=strlen(senha);

        if(tam<6 || tam>32){
            tamanho=0;  }
        else{
            tamanho++;
        }

		for(i=0;i<tam;i++){
			if(isupper(senha[i])!= 0)
				maiuscula++;
			else if (islower(senha[i]) != 0)
				minuscula++;
			else if ((senha[i] >=32 && senha[i]<='/') || (senha[i] > 58 && senha[i] > 40))
				caractere++;       
         }

        if (tamanho!= 0 && maiuscula != 0 && minuscula != 0 && caractere == 0){
				printf("Senha valida.\n");}
		else{
			printf("Senha invalida.\n");}

        maiuscula = 0;
		minuscula = 0;
		caractere = 0;

    }
	return 0;

}