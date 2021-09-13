#include <stdio.h>

int main(void) {
  int num_grades;
  float total, medium;

  printf("Quantas notas você deseja contabilizar? ");
  scanf(" %d", &num_grades);

  float grades[num_grades];

  for (int i = 0; i < num_grades; i++){
    printf("\nNota %d: ", (i + 1));
    scanf (" %f", &grades[i]);
    total += grades[i];
  }

  medium = total/num_grades;

  printf("\nA sua média final é: %.2f", medium);
  
  if (medium < 7){
    printf ("\nVocê não atingiu a média (nota 7) suficiente para passar de ano, boa sorte na recuperação!\n");
  }
  else {
    printf ("\nBoas férias!\n");
  }

  return 0;
}
