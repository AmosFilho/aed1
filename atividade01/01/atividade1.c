/*
	Aluno: Amós do Carmo Moreira Filho
	Matrícula: 2015310002

	Atividade 01
*/

#include <stdio.h>

int main()
{
	int i;
	int numeros[5];

	//entradas de dados
	for(i = 0; i < 5; i++)
		scanf("%d", &numeros[i]);

	//Saída de dados
	for(i = 0; i< 5; i++)
		printf("%d\n", numeros[i]);

	return 0;
}
