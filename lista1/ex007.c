/* Construa um programa que converta metros para centímetros. 

R.: 

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float metros, centimetros;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metros);
	fflush(stdin);
	
	centimetros = metros * 100;
	
	printf("%0.2f metros equivalem a %0.2f centimetros\n", metros, centimetros);
	
	return 0;
}
 
