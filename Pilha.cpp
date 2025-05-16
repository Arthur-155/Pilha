#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int dia, mes, ano;
}Data;

typedef struct {
	char nome[50];
	Data data;
}Pessoa;

typedef struct no{
	Pessoa p;
	struct no *proximo;
}No;

Pessoa ler_pessoa(){
	Pessoa p;
	
	printf("\nDigite nome e data de nascimento dd mm aaaa: \n");
	scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
	getchar();
}

No* empilhar(No *topo){
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo->p = ler_pessoa();
		novo->proximo = topo;
		return novo;
	}else{
		printf("Erro ao alocar memoria...");
		return NULL;
	}
}

int main(){
	No *topo = NULL;
	int opcao;
	
	
	do{
		printf("\n0- Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				topo = empilhar(topo);
				break;
			case 2:
				
				break;
			case 3: 
			
				break;
			default:
				if(opcao!=0)
				printf("\nOpccao invalida!!!\n");
		}
	}while(opcao!=0);
	
	return 0;
}
