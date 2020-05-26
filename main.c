#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funcion que regresa numero random
int getRandomNumber(int inf, int sup){
    //Caculamos el tamanio que necesitamos en nuestro arreglo
    return inf + (int)time(NULL) % (sup-inf+1);
}

int main()
{
    //Declaracion de variables
    int inf;
    int sup;
    int resultado;
    //preuntar por el numero
    printf("Limite Inferior:\n");
    scanf("%d",&inf);
    printf("Limite Superior:\n");
    scanf("%d",&sup);
    resultado=getRandomNumber(inf,sup);
    printf("Resultado: %d",resultado);
    return 0;
}
