#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void cadastra(int *v, int x){

	printf("===============================================================");
    printf("\nInsira o valor da posição [%d]:", x);
    scanf("%d",&v[x]);
    printf("===============================================================");

	printf("\n");
}

void imprimenum(int *v, int x){
	
	printf("===============================================================");
    for(int i=1;i<x;i++){
       printf("\nVetor [%d] de valor: %d", i, v[i]);
    }
    printf("\n===============================================================");

    printf("\n");
}

void imprimequan(int *v, int x){

	printf("===============================================================");
    printf("\nQuantidade de valores cadastrados: %d\n", (x-1));
	printf("\n===============================================================");
	
	printf("\n");
}

int remove(int *v, int x){

	x--;

	printf("===============================================================");
	printf("\nNúmero removido");
	printf("\n===============================================================");
	
	printf("\n");
	
	return x;
}
