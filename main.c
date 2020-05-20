#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funcion que regresa numero random
int getRandomNumber(int inf, int sup){
    //Caculamos el tamanio que necesitamos en nuestro arreglo
    int tamArreglo=sup-inf+1;
    int numeros[tamArreglo];
    int unixTime=(int)time(NULL);
    int index=0;
   // printf("tam: %d",tamArreglo);
    //Ciclo for para recorrer
    for(int i=0; i<tamArreglo;i++){
        numeros[i]=inf;
        inf++;
    }
    //recorrer el arreglo para saber cuando regresarlo
    for(int i=0; i<unixTime/3; i++){
        index++;
        if(index>=tamArreglo){
            index=0;
        }

    }
    return numeros[index];
}

int main()
{
    //Declaracion de variables
    int inf;
    int sup;
    int resultado;
    int unixTime=(int)time(NULL);
    //printf("UnixTime: %d \n",unixTime);
    //preuntar por el numero
    printf("Limite Inferior:\n");
    scanf("%d",&inf);
    printf("Limite Superior:\n");
    scanf("%d",&sup);
    resultado=getRandomNumber(inf,sup);
    printf("Resultado: %d",resultado);
    return 0;
}
