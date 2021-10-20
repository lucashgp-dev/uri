#include <stdio.h>

int main (){

float num[6],media=0;
int i,positivo;
for(i=0;i<6;i++){
    scanf("%f",&num[i]);
    if(num[i]>0){
        positivo++;
        media+=num[i];
    }}

    printf("%d valores positivos\n",positivo);
    printf("%.1f\n",media/positivo);

return 0;

}
