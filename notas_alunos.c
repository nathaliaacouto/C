#include <stdio.h>

int main (void){
  int size, i;
  float score, best_grade;

  printf("Quantos alunos você tem? ");
  scanf(" %d", &size);

  float students[size];

  for (i = 0; i < size; i++){
    printf("\nNota do aluno %d: ", (i + 1));
    scanf(" %f", &score);
    students[i] = score;
  }
  
  printf("\n");
  printf("---------------------------------------\n");
  printf("QUADRO DE NOTAS\n");

  for (i = 0; i < size; i++){
    printf("|aluno %d: %.2f|\t", (i + 1), students[i]);

    if (students[i] > students[i - 1]){
      best_grade = students[i];
    }
  }
  printf("\n---------------------------------------");
  printf("\n\nA melhor nota da classe foi: %.2f", best_grade);

  return 0;
}
