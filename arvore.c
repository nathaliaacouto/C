#include <stdio.h>
#include <stdlib.h>

struct arvore {
	int valor;
	struct arvore *direita;
	struct arvore *esquerda;
};

struct arvore *criar ()
{
	return NULL; //criou uma árvore vazia
}

int vazio (struct arvore *t)
{
	if (t == NULL){
		return 1;
	}
	else {
		return 0;
	}
}

void printar (struct arvore *t)
{
	if (vazio(t) == 0){
		printf("%d\t", t->valor);
		printar(t->direita);
		printar(t->esquerda);
	}
}

void inserir (struct arvore **t, int valor)
{
	if (*t == NULL) {
		*t = (struct arvore*)malloc(sizeof(struct arvore));
		(*t)->direita = NULL;
		(*t)->esquerda = NULL;
		(*t)->valor = valor;
	}
	else {
		if (valor < (*t)->valor) {
			inserir(&(*t)->esquerda, valor);
		}
		if (valor > (*t)->valor) {
			inserir(&(*t)->direita, valor);
		}
	}
}

int naarvore (struct arvore *t, int valor)
{
	if (vazio(t) == 1){
		return 10;
	}
	
	return t->valor==valor || naarvore(t->direita, valor) || naarvore(t->esquerda, valor);
}

int main (void) 
{
	printf("vamos montar uma árvore\n");
	struct arvore *t = criar();

	int vezes = 0, i = 0, num = 0, escolha = 0, val = 0, resultado;

	printf("quantos elementos você quer colocar? ");
	scanf("%d", &vezes);

	for (i = 0; i < vezes; i++) {
		printf("%d: ", i + 1);
		scanf("%d", &num);
		inserir(&t, num);
	}

	printf("aqui está a árvore criada:\n");
	printar(t);

	printf("\n\nquer continuar? 1 - sim; 2 - não ");
	scanf("%d", &escolha);

	if (escolha == 2) {
		printf("\naté mais!\n");
	}
	else {
		printf("\ninsira um número para checar se ele está dentro da árvore: ");
		scanf("%d", &val);

		resultado = naarvore(t, val);
		if (resultado == 10){
			printf("\nsua árvore está vazia\n");
		}
		if (naarvore(t, val)) {
			printf("\no valor está dentro da árvore\n");
		}
		else {
			printf("\no valor NÃO está dentro da árvore\n");
		}
	}
	return 0;
}
