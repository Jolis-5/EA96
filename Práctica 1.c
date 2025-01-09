//Práctica 1
// Created by Jolette Uribe on 08/01/2025.
//
#include <stdio.h>

//Función de validación
int validatePositiveInt(int num)
{
    if(num>0){
        return 1;
    } else {
        printf("El número no es válido, ingresa un entero\n");

        return 0;
    }
}

//Función bucle
void generateTable(int y, int result )
{

    for(int x = 1; x <= 10; x++) {
        result= x*y;



    }
}

//Función mostrar tabla;
void printTable(int x, int y, int result)
{
    printf("%d x %d = %d\n", x, y, result);
    return 0;
}




int main () {
int  num;
    printf("Ingrese un numero:\n");
    scanf("%d", &num);
    if(validatePositiveInt(num)) {
        printf("La tabla de multiplicar del numero que ingreso es: %d\n",printTable);
    }














    return 0;
}


