#include <lpc17xx.h>
#include <math.h>
int NUM_MAX = 65535;
unsigned primos[65535];
	
int main(){

	int j=0;
	int fin;
	int posicion=1;
	int limite=0;
	int i =3;
	int esprimo=1;
	primos[0]=2;
	
	
		while(i <= 65535){
			limite=sqrt(i)+1;
						for(j=0; primos[j]<=limite; j++){
							if (i%primos[j] == 0){
								esprimo=0;
								break;
							}
					}
						if(esprimo==1){
							primos[posicion]=i;
							fin=primos[posicion];
							posicion++;
						}
				i+=2;
					esprimo=1;
		}
	}
