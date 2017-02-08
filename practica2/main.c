#include <lpc17xx.h>
#include <math.h>
int NUM_MAX = 65535;
unsigned int primos[65535];

uint8_t esprimo(uint16_t i, int posicion){
	int j = 0;
	int limite=0; 
	limite=sqrt(i)+1;
		if (i==2){
		return 1;}
	if (i%2==0){
		return 0;}
	for(j=0; primos[j]<=limite; j++){
			if (i%primos[j] == 0){
					return 0;}
	}
	return 1;
}

int main() {

	uint16_t i=0;
	uint8_t esprimos;
	int posicion=0;
	int max;
	
	for(i=2; i<=NUM_MAX; i++){
		esprimos=esprimo(i, posicion);
		if (esprimos==1){
			primos[posicion]=i;
			posicion++;
			max=primos[posicion-1];
			}
		}
		return 0;
}
