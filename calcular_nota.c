/* Esse código calcula quanto um aluno tirou ao receber o gabarito da prova e o gabarito dele */

#include <stdio.h>

int main (void) {
	int N = 0, i = 0, count = 0;
		
	printf("Quantas questões a prova teve? ");
	scanf("%d", &N);

	char gabarito[N];
	char aluno[N];

	printf("Insira o gabarito oficial: ");
	for (i = 0; i <= N; i++) {
		scanf(" %c", &gabarito[i]);
	}
	
	printf("Insira o gabarito do aluno: ");
	for (i = 0; i <= N; i++) {
		scanf(" %c", &aluno[i]);
	}

	for (i = 0; i <= N; i++) {
		if (aluno[i] == gabarito[i]) {
			count++;
		}
	}
	printf("A nota do aluno foi: %d\n", count);

	return 0;
}
