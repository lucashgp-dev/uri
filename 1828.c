#include <stdio.h>

int main(){

    char string1[100], string2[100];
    int T,i;

    scanf("%d",&T);

    for(i=1; i<T+1; i++){

    scanf("%s",&string1);
    scanf("%s",&string2);

    if(strcmp(string1,string2)==0){
        printf("Caso #%d: De novo!\n",i); }

    if(strcmp(string1,"pedra")==0 && strcmp(string2,"tesoura")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"tesoura")==0 && strcmp(string2,"pedra")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"papel")==0 && strcmp(string2,"pedra")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"pedra")==0 && strcmp(string2,"papel")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"tesoura")==0 && strcmp(string2,"papel")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"papel")==0 && strcmp(string2,"tesoura")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"pedra")==0 && strcmp(string2,"lagarto")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"lagarto")==0 && strcmp(string2,"pedra")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"Spock")==0 && strcmp(string2,"pedra")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"pedra")==0 && strcmp(string2,"Spock")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"Spock")==0 && strcmp(string2,"tesoura")==0){
         printf("Caso #%d: Bazinga!\n",i);}

  if(strcmp(string1,"tesoura")==0 && strcmp(string2,"Spock")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"papel")==0 && strcmp(string2,"Spock")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"Spock")==0 && strcmp(string2,"papel")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"lagarto")==0 && strcmp(string2,"papel")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"papel")==0 && strcmp(string2,"lagarto")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"tesoura")==0 && strcmp(string2,"lagarto")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"lagarto")==0 && strcmp(string2,"tesoura")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    if(strcmp(string1,"lagarto")==0 && strcmp(string2,"Spock")==0){
         printf("Caso #%d: Bazinga!\n",i);}

    if(strcmp(string1,"Spock")==0 && strcmp(string2,"lagarto")==0){
         printf("Caso #%d: Raj trapaceou!\n",i);}

    }

    return 0;
}
