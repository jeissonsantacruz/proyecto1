#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define TRUE 1
#define FALSE 0
int main(){
	srand(time(NULL));
	int Num = rand()%(101);
	int NumR = rand()%(101);
	int NumI;
	int juegoT= FALSE;
	int intentos=10;
	
	printf("estoy pensando  un numero entre 1 y 100\n");
	printf("tienes %d intentos\n",intentos);
	while (juegoT == FALSE){
		printf("%d\n",NumR);
		printf("%d\n",Num);
		printf("ingresa un numero:\n");
		scanf("%d",&NumI);
		if (NumI == NumR || NumI == Num || NumI == (NumR+Num) || NumI == (NumR-Num) || NumI == (NumR*Num)){
			printf("!acertaste ¡ ese era el numero\n");
			juegoT= TRUE;
		}else{
			if (NumI > NumR){
			
				printf("el numero ingresado es mayor que en N1\n");
			}else{
				printf("el numero ingresado es menor que el N1\n");
			}
			if (NumI > Num){
			
				printf("el numero ingresado es mayor que el N2\n");
			}else{
				printf("el numero ingresado es menor que el N2\n");
			}
			if ((NumI > NumR && NumI < Num) || (NumI < NumR && NumI > Num) ) {
				printf("el numero ingresado esta entre los dos numeros\n");
			}
		}
	intentos--;
	if (intentos >0 && juegoT== FALSE){
		
		printf("te quedan %d intento(s)\n", intentos);
		
	}else{
		juegoT==TRUE;
	
	}if (intentos==0 && NumI != NumR){
		printf("el numero magico 1 que pense era el %d\n", NumR);
		printf("el numero magico 2 que pense era el %d\n", Num);
	}
	}
    return 1;
}
	
