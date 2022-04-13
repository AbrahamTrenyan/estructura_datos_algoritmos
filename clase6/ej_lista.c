/* Crear una lista simplemente enlazada con dos numeros enteros. Finaliza cuando el primer numero ingresado sea 0.
Mostrarla.
A) Cantidad de nodos donde el primer numero es multiplo del segundo.
B) Generar una lista con aquellos nodos donde la suma de los numeros sea mayor a 20
C)Genersr una lista con el promedio de los numeros enteros.
*/
prin = (nodo *)malloc(sizeof(nodo));
void crear(nodo *registro)
{
    registro->num = ;
    if (registro->num == 0)
        registro->sig = NULL;
    else
    {
        registro->sig = (nodo *)malloc(sizeof(nodo));

        crear(registro->sig);
    }
    return;
    int main()
    {
        int i = 0;
        nodo *prin;
        prin = (nodo *)malloc(sizeof(nodo));
        crear(prin);
        mostrar(prin);
        return 0;
    }
