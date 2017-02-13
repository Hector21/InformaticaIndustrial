#include <lpc17xx.h>
#include <math.h>
int NUM_MAX = 65535;
unsigned int primos[65535];
	int j=0;
	int fin=0;
	int posicion=1;
	int limite;
	uint16_t i =3;
	
	uint8_t esprimos (uint16_t i){
					limite=sqrt(i)+1;
						for(j=0; primos[j]<=limite; j++){
								if (i%primos[j] == 0){
									return 0;
								}
						}
						return 1;
}
	
int main(){
	
	primos[0]=2;
	
		while(i < 65535){
		
						if(esprimos(i)==1){
							primos[posicion]=i;
							fin=primos[posicion];
							posicion++;
						}
				i=i+2;
						
		}
	}
