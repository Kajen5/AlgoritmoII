#include <stdlib.h>
#include <stdio.h>

struct nodo{
	char valor[10];
	struct nodo *siguiente;
};

typedef nodo lista;
lista *nodo1,*nodo2,*nodo3,*nodo4,*nodo5,*nodo6;

void crear_nodos(){
	nodo1=new(nodo);
	nodo2=new(nodo);
	nodo3=new(nodo);
	nodo4=new(nodo);
	nodo5=new(nodo);
	nodo6=new(nodo);
	nodo1->siguiente=NULL;
	nodo2->siguiente=NULL;
	nodo3->siguiente=NULL;
	nodo4->siguiente=NULL;
	nodo5->siguiente=NULL;
	nodo6->siguiente=NULL;
}

void ingresar_nodos(){
	crear_nodos();
	printf("Ingrese el primer valor:\n");
	scanf("%s",nodo1->valor);
	printf("Ingrese el segundo valor:\n");
	scanf("%s",nodo2->valor);
	printf("Ingrese el tercer valor:\n");
	scanf("%s",nodo3->valor);
	printf("Ingrese el cuarto valor:\n");
	scanf("%s",nodo4->valor);
	printf("Ingrese el quinto valor:\n");
	scanf("%s",nodo5->valor);
	printf("Ingrese el sexto valor:\n");
	scanf("%s",nodo6->valor);
	system("pause");
	system("cls");
 }

 void enlazar_nodos(){
	nodo1->siguiente=nodo2;
	nodo2->siguiente=nodo3;
	nodo3->siguiente=nodo4;
	nodo4->siguiente=nodo5;
	nodo5->siguiente=nodo6;
	printf("nodos enlazados\n");
	system("pause");
	system("cls");
}

 void mostrar_nodos(){
	lista *auxiliar;
	auxiliar=nodo1;
	while (auxiliar!=NULL){
		printf("%s\n",auxiliar->valor);
		auxiliar=auxiliar->siguiente;
	}
	system("pause");
	system("cls");
}
void menu(){
	int op;
	printf("Seleccione una de las siguientes opciones\n");
	printf("1.-Guardar Nodos\n");
	printf("2.-Enlazar Nodos\n");
	printf("3.-Leer Nodos\n");
	printf("4.-Salir\n");
	scanf("%i",&op);
	system("cls");
	switch (op)
	{
	case 1:
		ingresar_nodos();
		menu();
	case 2:
		enlazar_nodos();
		menu();
	case 3:
		mostrar_nodos();
		menu();
	case 4:
		exit(0);
	default:
		printf("Opcion invalida\n\n");
		menu();
	}
 }

 void main(){
menu();
 }
