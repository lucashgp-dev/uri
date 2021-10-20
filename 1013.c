#include <stdio.h>

int main() {
    int A,B,C;
    int maiorAB,maiorABC;

    scanf("%d %d %d",&A,&B,&C);
    maiorAB = (A+B+abs(A-B))/2;
    maiorABC = (maiorAB+C+abs(maiorAB-C))/2;

    printf("%d eh o maior\n",maiorABC);

    return 0;
}
