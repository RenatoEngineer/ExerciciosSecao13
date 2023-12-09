/*
 * ex002.c
 *
 *  Criado em: 9 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao13
 */

#include <stdio.h>

int fatorial(int n){
	if (n == 0 || n == 1){
		return 1;
	} else {
		return (int)n * fatorial(n - 1);
	}
}

int main(){

	int numero;

	printf("Digite um numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	if (numero < 0){
		printf("\nNumero Invalido!!!\nDigite um Inteiro Positivo!!!\n");
		return 1;
	}

	int resultado = fatorial(numero);
	printf("\nO Fatorial de %d e: %d\n", numero, resultado);

	return 0;
}
