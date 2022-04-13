/*Crear un programa que verifique si un numero ingresado es primo o no hasta ingresar un numero negativo. Ahi saca el promedio de los numeros primos*/
#include <stdio.h>
int main()
{   
    int primos = 0, acum = 0, divisores=0, num, i;
    printf("ingrese un numero");
    scanf("%d", &num);
    while(num>0){
        for(i=2; i < num; i++){
            if(num%i==0)
                {
                    divisores++;
            }
        }
        if(divisores==00){
            acum += num;
            primos++;
        }
        divisores = 0;
        printf("ingrese un numero");
        scanf("%d", &num);
    }
    if (primos!=0)
        printf("el promedio de los numeros primos es %d", acum/primos);
    else
        printf("no hay numeros primos");

}
