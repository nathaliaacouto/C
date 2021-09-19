#include <stdio.h>

int main(void) {
  float grades[4][4], medium[4], grade, student1, student2, student3, student4;

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      printf("\nNota do aluno %d no bimestre %d: ", (i + 1), (j + 1));
      scanf(" %f", &grades[i][j]);
      grade += grades[i][j];

    }
    printf ("\n------------------------------------\n");
    medium[i] = grade/4;
    grade = 0;
  }

  printf("\nA média final de cada aluno é: \n1 = %.2f \t2 = %.2f \t3 = %.2f \t4 = %.2f", medium[0], medium[1], medium[2], medium[3]);

  return 0;
}

