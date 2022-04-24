//Calculadora simples

#include <stdio.h>

int main(void) {
  int escolha, i;
  float num1, num2, soma, subtracao, divisao, multi;
  printf("Calculadora simples \n \n");
  printf("1 - soma; 2 - subtração; 3 - multiplicação; 4 - divisão: ");
  scanf("%d", &escolha);

  if (escolha == 1){
    printf("Digite dois números: ");
    scanf("%f%f", &num1, &num2);
    soma = num1 + num2;
    printf("%f + %f: %f", num1, num2, soma);
  }

  if (escolha == 2){
    printf("Digite dois números: ");
    scanf("%f%f", &num1, &num2);
    subtracao = num1 - num2;
    printf("%f - %f: %f", num1, num2, subtracao);
  }

  if (escolha == 3){
    printf("Digite dois números: ");
    scanf("%f%f", &num1, &num2);
    multi = num1 * num2;
    printf("%f x %f: %f", num1, num2, multi);
  }

  if (escolha == 4){
    printf("Digite dois números: ");
    scanf("%f%f", &num1, &num2);
    divisao = num1/num2;
    printf("%f/%f: %f", num1, num2, divisao);
  }

  printf("\nXauzinho! \n");

  return 0;
}
