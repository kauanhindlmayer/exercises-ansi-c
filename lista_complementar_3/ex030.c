/*
  Faça um programa para calcular o seu “Número da Sorte”. A entrada do 
  programa é um nome ( completo, sem espaços entre as palavras ). A saída é um 
  número inteiro, calculado da seguinte forma: Para cada letra do nome, se
  determina um número de ordem correspondente no alfabeto: a letra A corresponde 
  a 1, a letra B corresponde a 2, e assim por diante . Estes números são somados 
  e a soma resultante é dividida por 9. O resto desta divisão é o número da sorte. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void) {

  char nome[100];
  int numeroDaSorte, i, soma = 0;

  printf("Digite seu nome completo (sem espacos): ");
  gets(nome);
  fflush(stdin);

  for(i = 0; i < strlen(nome); i++) {
    soma += toupper(nome[i]) - 26;
  }

  numeroDaSorte = soma % 9;

  printf("\nNumero da Sorte: %i", numeroDaSorte);

  return 0;
}