/*
 * ex003.c
 *
 *  Criado em: 9 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao13
 */

#include <stdio.h>

//Funcao Recursiva
int binario(int n){
	if (n == 0){
		return n;
	} else {
		return (n % 2 + 10 * binario(n / 2));
	}
}

int main(){

	int numero;

	printf("Digite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	if (numero < 0){
		printf("\nNumero Invalido!!!\nDigite um Numero Inteiro nao Negativo!!!\n");
	} else {
		printf("\nO Numero %d em Binario eh: %d", numero, binario(numero));
	}

	return 0;
}
