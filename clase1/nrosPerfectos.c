//Generar los 4 primeros numeros perfectos
#include <stdio.h>
int main(){
    int num=1, acum = 0, cont=0, i, m;
    while(cont<4){
        for (i=1; i<num;i++){
            if(num%i==0){
            acum=acum+i;
            }
        }
        if(num==acum){
            cont++;
            printf("%d \n", num);
        }
    num++;
    acum=0;
}}