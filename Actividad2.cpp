#include <stdlib.h>
#include <stdio.h>

struct nodo{
	char valor[15];
	struct nodo *siguiente;
};

typedef nodo lista;

lista *alpha,*ultimo;

void lectura_nodos(){
	lista *auxiliar;
	auxiliar=alpha;
	while (auxiliar!=NULL){
		printf("%s\n",auxiliar->valor);
		auxiliar=auxiliar->siguiente;
	}
}
void guardar_en_nodo(char cadena[15]) {
    lista *nuevo;
    nuevo = new(nodo);
	if (nuevo==NULL){
		printf( "No hay memoria disponible!\n");
	}else{
		for (int i = 0; i < 15; i++)	 {
		 nuevo->valor[i]=cadena[i];
		 }
		nuevo->siguiente = NULL;
		if (alpha==NULL){
			alpha = nuevo;
			ultimo = nuevo;
		}else{
			ultimo->siguiente = nuevo;
			ultimo = nuevo;
        }
	}
}
 void guardar_valor(){
 char temporal[15];
 printf("\n\nIngrese el valor: ");
 scanf("%s",&temporal);
 guardar_en_nodo(temporal);
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
 void lista_valores(){
 guardar_en_nodo("tolerancia");
 guardar_en_nodo("comprension");
 }
 void main(){
 bienvenida();
 lista_valores();
 menu();
 }
