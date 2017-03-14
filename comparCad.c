#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compararCadenas (char *cad1, char *cad2){

	int x,i,j;

	for(i=0;i<(strlen(cad1));i++){
		for(j=0;j<(strlen(cad2));j++){

			if(cad1[i]==cad2[j]){
				return 0;
			}
			if(cad1[i]<cad2[j]){
				return -1;
			}
			if(cad1[i]>cad2[j]){
				return 1;
			}
		}
	}
}


void main(){
	
	char cad1[]={'a','b','c','\0'};
	char cad2[]={'A','b','C','D','\0'};

	compararCadenas(cad1,cad2);
}	
		

