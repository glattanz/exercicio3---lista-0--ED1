#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necess�rio para usar as fun��es malloc() e free()
#include <conio.h>
#include <locale.h>
#include "biblioteca.h"

using namespace std;

int main (int argc, char**argv){

    setlocale(LC_ALL, "Portuguese");

	int a, i, v[10], x=1;

	/*
    for(int i=0;i<10;i++){
        printf("Insira o valor da posi��o %d: ", i+1);
        scanf("%d",&v[i]);
    }*/

    inicio:
    cout<<"\nFavor selecionar op��o:\n";
    cout<<"1) Cadastrar n�mero.\n ";
    cout<<"2) Exibir n�mero(s) cadastrados.\n";
    cout<<"3) Exibir quantidade de n�meros cadastrados.\n";
    cout<<"4) Remover �ltimo n�mero cadastrado.\n";
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
            cout<<"\nOp��o inv�lida, inisira uma das op��es abaixo .\n";
            goto inicio;
    }

}
