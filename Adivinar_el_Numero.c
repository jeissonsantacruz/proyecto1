#include<stdio.h>
#include <stdlib.h>

int main(void){
    //variables
    int numero,numero2;
    numero = rand() % 100;
    numero2 = rand() % 100;

    int suma,resta,multipliacion;

    suma=numero+numero;
    multipliacion=numero*numero;
    if(numero<numero2){
        resta=numero2-numero;
    }
    else{
        resta=numero-numero2;
    }
    //////////////////////////////////////////////
    int x;
    int contador=0,contador2=0;

    int historial[100];
    int i=0;


    printf("Debes encontrar el numero entre 1 y 100.\nCada vez que escribas un numero, se te dira si es mas grande o mas pequeño, a uno de los dos numeros \nque tienes que adivinar. al igual que la suma , resta o multiplicacion de los numeros .\nTambien se te dira cuanto te demoraste en lograrlo y el historial de todos los numeros que utilizaste.\nSUERTE!!\n\n");

    printf("ingrese el numero\n");
    scanf("%d",&x);
    historial[i]=x;
    ////////////////////////////////////////////////

    while(x!=numero && x!=numero2 && x!=suma && x!=resta && x!=multipliacion){
        if(x<numero){
            printf("el numero uno(1) a adivinar es Mayor\n");
            contador++;
        }
        if(x>numero){
            printf("el numero uno(1) a adivinar es Menor\n");
            contador++;
        }
        if(x<numero2){
            printf("el numero dos(2) a adivinar es Mayor\n");
            contador++;
        }
        if(x>numero2){
            printf("el numero dos(2) a adivinar es Menor\n");
            contador++;
        }

        if(numero>numero2){
            if((numero>x) && (x<numero2)){
                printf("El numero ingresado esta entre el primero y el segundo");
                contador++;
            }
        }
        if(numero<numero2){
            if((numero<x) && (x<numero2)){
                printf("El numero ingresado esta entre el primero y el segundo");
                contador++;
            }
        }


        printf("Ingrese el numero\n");
        scanf("%d",&x);
        i++;
        historial[i]=x;
    }
    contador++;
    printf("Lo intentaste: %d veces antes de descubrir el numero \n",contador);
    printf("usaste estos numeros antes de encontrar el numero:\n");
    int j=0;//variable para imprimir todo el historial
    while(j<=i){
        printf("%d\n", historial[j]);
        j++;
    }
    printf("\nEl numero uno(1) era %d\n",numero);
    printf("El numero dos(2) era %d\n",numero2);
    printf("Si aun asi gano. Significa que acerto la suma, resta o multiplicacion del numero :) ");

}
