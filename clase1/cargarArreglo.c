//Ingrese numeros enteros hasta que sea 0 y cargar una arreglo con aquellos numeros impares multiplos de 3.
//Si no tiene elementos mostrar un cartel que diga que esta vacio. si los tuviese insertar luego de cada elemento
//negativo su consecutivo. Mostrar nuevamente el arreglo.
#include <stdio.h>
int main(){
    int vec[50], nro, i;
    printf("ingrese un numero");
    scanf("%d", &nro);
    while(nro!=0){
        if(nro%3==0 && nro%2!=0){
            for(i=0; i<50; i++){
                vec[i]=nro;
            }
        }
        for(i=0; i<50;i++){
            printf
        }
        printf("ingrese un numero");
        scanf("%d", &nro);
    }
}
