/*Ingresar la edad y sueldo de los empleados de una empresa hasta que ambas sean
cero. Calcular y mostrar:
a) El promedio de edad de los que ganan más de $10000
b) El sueldo de aquellas personas mayores a 58 años, sabiendo que
cobran un plus del 5% de su sueldo.
c) El porcentaje de empleados cuyo sueldo es menor a 15000, que está
entre 15000 y 20000, y mayor a 20000
*/
#include <stdio.h>
int main(){
    int sueldo, edad,  contador=0;
    int contadorMayor10k=0, acumMayor10k=0;
    int contadorMenorQuince=0, contadorde15a20=0, contadorMayor20=0;
    scanf("%d %d", &sueldo, &edad);
    while(sueldo != 0 && edad != 0){
        contador++;
        if(edad > 58){
            sueldo = sueldo+((sueldo/100)*5);
            printf("el sueldo mas el bonus es de: %d \n", sueldo);
        }
        if(sueldo < 15000){
            contadorMenorQuince++;
        }
        else if(sueldo < 20000){
            contadorde15a20++;
        }
        else{
            contadorMayor20++;
        }
        if(sueldo > 10000){
            contadorMayor10k++;
            acumMayor10k+=edad;
        }
        scanf("%d %d", &sueldo, &edad);
    }
    printf("el promedio de edad de los que ganan mas que 10k es de %d \n", acumMayor10k/contadorMayor10k);
    printf("el porcentaje de los que ganan menos de 15000 es de \%% %d \n", (contadorMenorQuince/contador)*100);
    printf("el porcentaje de los que ganan entre 15000 y 20000 es de \%% %d /n",(contadorde15a20/contador)*100);
    printf("el porcentaje de los que ganan mas de 20000 es de \%% %d /n",(contadorMayor20/contador)*100);
    return 0;
}