"Crear un programa que verifique si un numero ingresado es primo o no hasta ingresar un numero negativo. Ahi saca el promedio de los numeros primos"
num = int(input("ingrese un nro mayor a 0"))
divisores = 0
acum = 0
primos = 0
while num > 0:
    for i in range(2, num):   
        if num % i == 0:
            divisores += 1
    if divisores == 0:
        primos+=1
        acum += num
    divisores = 0
    num = int(input("ingrese un nro mayor a 0"))
if primos != 0:
    print("el promedio de primos es de", acum/primos)
else:
    print("no hay numeros primos")

