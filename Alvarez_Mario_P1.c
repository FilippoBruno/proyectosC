#include <stdio.h>

int main(){	

	int dinero_disponible;
	unsigned short int saldo=0;
	unsigned short int subtotal=0;
	short int precio_1=13;
	short int precio_2=12.5;
	short int precio_3=8;
	short int precio_4=3;
	short int precio_5=2.5;
	short int unidades;
	unsigned short int retorno;
	int num_producto;
	printf("Bienvenido a la Tienda de Tomás y Mario\n");
	printf("¿Cuánto dinero tienes\n");
	scanf("%d", &dinero_disponible);

	do{

		printf("Contamos con los siguientes productos:\n");
		printf("1.- Refresco  $13\n");
		printf("2.- Frituras  $12.50\n");
		printf("3.- Galletas  $8\n");
		printf("4.- Mazapán   $3\n");
		printf("5.- Chicles   $2.50\n");
		//subtotal+=dinero_disponible;	
		//dinero_disponible-=subtotal;
		printf("Actualmente cuentas con $%d\n",dinero_disponible);
		printf("Subtotal de la compra: $%d\n",subtotal);
		printf("Teclea el número de producto que deseas comprar: \n");
		scanf("%i",&num_producto);
		switch(num_producto){

			case 1:
				
				printf("¿Cuántas unidades quieres comprar? \n");
				scanf("%d",&unidades);
				precio_1*=unidades;
				if(dinero_disponible>precio_1){
					dinero_disponible-=precio_1;
				}
				else{
					printf("No cuentas con dinero suficiente\n");
				}
				subtotal=precio_1;
			break;

			case 2:
				
				printf("¿Cuántas unidades quieres comprar? \n");
				scanf("%d",&unidades);
				precio_2*=unidades;
				if(dinero_disponible>precio_2){
					dinero_disponible-=precio_2;
				}
				else{
					printf("No cuentas con dinero suficiente\n");
				}
				subtotal=precio_2;
			break;

			case 3:
				
				printf("¿Cuántas unidades quieres comprar? \n");
				scanf("%d",&unidades);
				precio_3*=unidades;
				if(dinero_disponible>precio_3){
					dinero_disponible-=precio_3;
				}
				else{
					printf("No cuentas con dinero suficiente\n");
				}
				subtotal=precio_3;
			break;

			case 4:
				
				printf("¿Cuántas unidades quieres comprar? \n");
				scanf("%d",&unidades);
				precio_4*=unidades;
				if(dinero_disponible>precio_4){
					dinero_disponible-=precio_4;
				}
				else{
					printf("No cuentas con dinero suficiente\n");
				}
				subtotal=precio_4;
			break;

			case 5:
				
				printf("¿Cuántas unidades quieres comprar? \n");
				scanf("%d",&unidades);
				precio_5*=unidades;
				if(dinero_disponible>precio_5){
					dinero_disponible-=precio_5;
				}
				else{
					printf("No cuentas con dinero suficiente\n");
				}
				subtotal=precio_5;
			break;
		}
		printf("Si deseas comprar algo más presiona 1, caso contrario presiona cualquier tecla\n");
		scanf("%d",&retorno);

	} while(retorno==1);	





	return 0;
}


