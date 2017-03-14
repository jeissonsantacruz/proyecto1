#include<stdio.h>

#include<stdlib.h>
#include <string.h>

char* copiaCadena(char *origen){
	

	int i;
	
	int n=strlen(origen);


	char *destino;
	destino=(char *)malloc(strlen(origen)+1);	
	

	for(i=0;i<n;i++){
		
		destino[i]=origen[i];
	
	}
	
	destino[n+1]='\0';

	printf("%s",destino);


}

char main(int argc, char *argv[]){
	
	char *cad1=argv[1];

	copiaCadena(cad1);
}