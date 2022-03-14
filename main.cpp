#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <conio.h>
#include <locale.h>
#include "biblioteca.h"

using namespace std;

int main (int argc, char**argv){

    setlocale(LC_ALL, "Portuguese");

	int a, i, v[10], x=1;

	/*
    for(int i=0;i<10;i++){
        printf("Insira o valor da posição %d: ", i+1);
        scanf("%d",&v[i]);
    }*/

    inicio:
    cout<<"\nFavor selecionar opção:\n";
    cout<<"1) Cadastrar número.\n ";
    cout<<"2) Exibir número(s) cadastrados.\n";
    cout<<"3) Exibir quantidade de números cadastrados.\n";
    cout<<"4) Remover último número cadastrado.\n";
    cout<<"5) Sair.\n";

    cin>>a;

    switch(a){

        case 1:
            cadastra(v, x);
            x++;
            goto inicio;

        case 2:
            imprimenum(v, x);
            goto inicio;

        case 3:
            imprimequan(v, x);
            goto inicio;

        case 4:
        	remove (v, x);
        	goto inicio;
            
        case 5:
        	break;

        default:
            cout<<"\nOpção inválida, inisira uma das opções abaixo .\n";
            goto inicio;
    }

}
