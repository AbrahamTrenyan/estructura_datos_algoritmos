#include <stdio.h>
void cargar(int mat [10][10], int a){
    int i, j;
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("ingrese valor");
            scanf("%d", &mat[i][j]);
        }
    }
}
void sumarFila(int mat[10][10], int a){
    int i, suma=0;
    for(i=0; i<a;i++){
        suma=suma+mat[1][i];
        printf("\nla suma de la fila 2 es %d",suma);
    }
}
int main(){
    int mat [10][10], dim;
    printf("ingrese la cantidad de filas");
    scanf("%d", &dim);
    cargar(mat, dim);
    sumarFila(mat, dim);
    }