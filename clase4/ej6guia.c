/* 6. Diseñar un algoritmo recursivo que muestre el número menor de un vector.
*/
#include <stdlib.h>
void llamarMenor(int vec[], int tamVec){
    mostrarMenor(vec, tamVec,1,vec[0]);
}
void mostrarMenor(int vec[], int tamVec, int indice, int menor){
    if(tamVec-1==indice){
        if(vec[indice]<menor){
            printf("el menor numero es %d", vec[indice]);
        }
        else printf("el menor numero es %d", menor);
    }
    else{
        if(vec[indice]<menor)
        {
            mostrarMenor(vec, tamVec, indice++, vec[indice]);
        }
        else mostrarMenor(vec, tamVec, indice++, menor);
    }
}
int main(){
    int vec[5]={1,2,3,4,5};
    llamarMenor(vec, 5);
    return 0;
}