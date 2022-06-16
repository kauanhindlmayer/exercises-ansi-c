/*
  Fazer um programa que possibilite várias opções de cálculos a partir de um menu. 
  O programa chamará a função correspondente a cada cálculo.
  [ a ]  S = 1/1 + 3/2 + 5/3+........+ 99/50
  [ b ]  S = 1/1 -2/2 + 3/3 -..........-10/10
  [ c ]  S = 1000/1 -997/2 + 994/3.........
  [ d ]  S = 480/10 -475/11 + 470/12 -.......
  [ e ]  FIM
  Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
*/

#include <stdio.h>
#include <stdlib.h>

void menu(void) {
  printf("\n-------------------MENU--------------------");
  printf("\n[ a ]  S = 1/1 + 3/2 + 5/3+...+ 99/50");
  printf("\n[ b ]  S = 1/1 -2/2 + 3/3 -...-10/10");
  printf("\n[ c ]  S = 1000/1 -997/2 + 994/3...");
  printf("\n[ d ]  S = 480/10 -475/11 + 470/12...");
  printf("\n[ e ]  FIM");
  printf("\n-------------------------------------------");
}

void funcA(void) { 
  float soma = 0, denominador, numerador = 1;;

  for(denominador = 1; denominador <= 50; denominador++, numerador += 2) {
    soma += numerador / denominador;
    printf("\nS = %.1f / %.1f", numerador, denominador);
  }

  printf("\n\nResultado: %.2f", soma);
}

void funcB(void) {
  float soma = 0, denominador, numerador = 1;;

  for(denominador = 1; denominador <= 5; denominador++, numerador += 2) {
    soma += (numerador / denominador) - ((numerador + 1) / (denominador + 1));
    printf("\nS = (%.1f / %.1f) - (%.1f / %.1f)");
  }

  printf("\n\nResultado: %.2f", soma);
}

void funcC(void) {
  
}

void funcD(void) {
  
}

int main(void) {
  char opcao;

  menu();

  printf("\nDigite a opcao desejada: ");
  scanf("%c", &opcao);
  fflush(stdin);

  switch(opcao) {
    case 'a':
      funcA();
      break;
    case 'b':
      funcB();
      break;
    case 'c':
      funcC();
      break;
    case 'd':
      funcD();
      break;
    case 'e':
      printf("Fim!");
      break;
    default:
      printf("Opcao invalida!");
      break;
  }

  return 0;
}