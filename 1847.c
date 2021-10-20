#include <stdio.h>
#include <string.h>
int main(){

int t1,t2,t3;

scanf("%d %d %d",&t1,&t2,&t3);

//constante
if (t1==t2) {
    if(t3>t2) printf(":)\n");
    else if((t3<t2) || (t3==t2)) printf(":(\n");
}


//subir
 if ((t2>t1) && (t3>t2)){
        if((t3-t2)< (t2-t1)) {
            printf(":(\n");}
        else {printf(":)\n");}
}
else if (t2>t1) {
    if ((t3<t2) || (t3==t2))  printf(":(\n");}


//descer
 if ((t2<t1) && (t3<t2)){
        if((t2-t3)< (t1-t2)) {
            printf(":)\n");}
        else {printf(":(\n");}
}
else if (t2<t1) {
    if ((t3>t2) || (t3==t2))  printf(":)\n");}


return 0;
}

