#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct nodo{
	char valor[15];
	struct nodo *siguiente;
};

typedef nodo lista;
lista *a,*b,*ultimo;

void lista_valores(){
a=new(nodo);
b=new(nodo);
a->siguiente=NULL;
b->siguiente=NULL;
strcpy(a->valor,"tolerancia");
strcpy(b->valor,"comprension");
a->siguiente=b;
ultimo=b;//para asi poder continuar a partir de "b", es como el creador de nodos
 }
void lectura_nodos(){
	lista *auxiliar;
	auxiliar=a;
	while (auxiliar!=NULL){
		printf("%s\n",auxiliar->valor);
		auxiliar=auxiliar->siguiente;
	}
}
 void guardar_valor(){
	lista *nuevo;
	nuevo = new(nodo);
	if (nuevo==NULL){
		printf( "No hay memoria disponible!\n");
	}else{
		printf("\n\nIngrese el valor: ");
		scanf("%s",&nuevo->valor);
		nuevo->siguiente = NULL;//como ya voy a empezar en "a" no necesito "primero", ni tampoco a if/else, "a" nunca va ha estar vacio
		ultimo->siguiente = nuevo;
		ultimo = nuevo;
	}
 }
 void menu(){
	 system("pause");
	 system("cls");
	 int op;
	printf("Seleccione una de las siguientes opciones\n");
	printf("1.-Guardar Valor\n");
	printf("2.-Leer Valores\n");
	printf("0.-Salir\n");
	scanf("%i",&op);
	system("cls");
	switch (op)
	{
	case 1:
		guardar_valor();
		menu();
	case 2:
		lectura_nodos();
		menu();
	case 0:
		exit(0);
	default:
		printf("Opcion invalida\n\n");
		menu();
	}
 }
 void bienvenida(){
 system("color b4");
 printf("\n\n\n\tBienvenidos\n\n\n");
 }

 void main(){
 bienvenida();
 lista_valores();
 menu();
 }
