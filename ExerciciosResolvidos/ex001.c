/*
 * ex001.c
 *
 *  Criado em: 9 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao13
 */

#include <stdio.h>

//Funcao Recursiva
int somatorio(int n){
	if (n == 1){
		return 1;
	} else {
		return n + somatorio(n - 1);
	}
}

int main(){

	int numero;

	printf("Digite um Numero Inteiro Positivo N: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Verifica se o numero eh positivo
	if (numero <= 0){
		printf("\nNumero Invalido!!!\nFavor Digite um Numero Inteiro Positivo!!!");
		return 1;
	}

	//Calcula e imprime o somatorio
	int resultado = somatorio(numero);
	printf("O Somatorio de 1 a %d e: %d\n", numero, resultado);

	return 0;
}
