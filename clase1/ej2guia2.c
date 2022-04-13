/*Ingresar el día y la cotización del dólar durante un mes. Calcular y mostrar el día
donde hubo la mayor cotización.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int dias=0, cotizacion, cotizacionAnterior=0, diaMayorCotizacion;
    while(dias<5){
        dias++;
        printf("ingrese la cotizacion del dia %d \n", dias);
        scanf("%d", &cotizacion);
        if(cotizacion>cotizacionAnterior){
            diaMayorCotizacion=dias;
        }
        cotizacionAnterior=cotizacion;
    }
    printf("el dia de mayor cotizacion fue %d \n", diaMayorCotizacion);
}
