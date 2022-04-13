#include <stdio.h>
#include <stdlib.h>
void invertir(int c){
    if(c==".")
        return;
    c=getchar();
    putchar(c);
    invertir(c);
    
}
int main(){
    int c;
    printf("ingrese la frase");
    c=getchar();
    invertir(c);
    putchar(c);
}