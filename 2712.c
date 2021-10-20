#include <stdio.h>
#include <ctype.h>

int main(){

int N;
char S[100];
int i,j,k;
int saida = 0;
int letra = 0;
int num = 0;

scanf("%d",&N);

for(k=0;k<N;k++){

            scanf("%s",&S);
            saida=0;
            //verificar tamanho
            if (strlen(S) !=8){ saida++;}
             //printf("saida tamanho = %d\n",saida);
            //verificar -
            if (S[3] !='-'){ saida++; }
            //printf("saida trasso = %d\n",saida);
            //verificar letra

            letra=0;
            i=0;
            while(i<3){
            if (isalpha(S[i]) && isupper(S[i])){letra++;}
            i++;}

            if (letra != 3){ saida++;}
             //printf("saida letra = %d\n",saida);
            //verificar numeros

            num=0;
            j=4;
            while(j<8){
             if( isdigit(S[j]) ){num++;}
             j++;}
            if (num != 4){ saida++;}
            //printf("num = %d\n",num);
            //printf("saida num = %d\n",saida);


if (saida==0 ){
    switch (S[7]) {
            case '1': case '2':
            printf("MONDAY\n");break;
            case '3': case '4':
            printf("TUESDAY\n");break;
            case '5': case '6':
            printf("WEDNESDAY\n");break;
            case '7': case '8':
            printf("THURSDAY\n");break;
            case '9': case '0':
            printf("FRIDAY\n");break;}}

else{

        printf("FAILURE\n");}
 }


return 0;
}




