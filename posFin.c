#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int posFin(char *origen, char *car){

	
	
	int i=0;
	
	int n=strlen(origen);
	int pos=0;	
	
	for(i=0;i<n;i++){	
		if(origen[n]==car[0]){
			pos=i+1;
			n--;
			return pos;
		}
	}
}


int main(int argc, char *argv[]){


	char *cad1=argv[1];
	
	char *car=argv[2];

	int pos;
	pos=posFin(cad1,car);

	printf("%d", pos);

}
