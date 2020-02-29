#include <stdio.h>

int main (){
	float saldo;
	float precio_fritura=13;
	float precio_refresco=15;
	float precio_chicle=3;
	float precio_galleta=14;
	float precio_chocolate=10;
	float cantidad_productos;
	int producto;
	int eleccion;

	printf("¿De cuánto es tu saldo disponible?\n");
	scanf("%f",&saldo);

	do {

	printf("1 Fritura $13\n");
	printf("2 Refresco $15\n");
	printf("3 Chicle $3\n");
	printf("4 Galleta $14\n");
	printf("5 Chocolate $10\n");
	
	printf("Introduce el número del producto que quieras\n");
	scanf("%i",&producto);

	switch (producto) {
		case 1: 
				printf("Introduce el número de productos\n");
				scanf("%f",&cantidad_productos);
					if (saldo>cantidad_productos*precio_fritura){
						saldo-=cantidad_productos*precio_fritura;
						printf("Su saldo actual es ahora de %f\n",saldo);

						printf("Si quieres comprar otros productos teclea 1\n");
						scanf("%i",&eleccion);
					} 
					else {
						printf("No te alcaza el saldo");
					}
		case 2:
				printf("Introduce el número de productos\n");
				scanf("%f",&cantidad_productos);
					if (saldo>cantidad_productos*precio_refresco){
						saldo-=cantidad_productos*precio_refresco;
						printf("Su saldo actual es ahora de %f",saldo);

						printf("Si quieres comprar otros productos teclea 1\n");
						scanf("%i",&eleccion);
					} 
					else {
						printf("No te alcaza el saldo");
					}
				break;
		case 3:

				printf("Introduce el número de productos\n");
				scanf("%f",&cantidad_productos);
					if (saldo>cantidad_productos*precio_chicle){
						saldo-=cantidad_productos*precio_chicle;
						printf("Su saldo actual es ahora de %f",saldo);

						printf("Si quieres comprar otros productos teclea 1\n");
						scanf("%i",&eleccion);
					} 
					else {
						printf("No te alcaza el saldo");
					}
				break;

		case 4:
				printf("Introduce el número de productos\n");
				scanf("%f",&cantidad_productos);
					if (saldo>cantidad_productos*precio_galleta){
						saldo-=cantidad_productos*precio_galleta;
						printf("Su saldo actual es ahora de %f",saldo);

						printf("Si quieres comprar otros productos teclea 1\n");
						scanf("%i",&eleccion);
					} 
					else {
						printf("No te alcaza el saldo");
					}
				break;
		case 5:
				printf("Introduce el número de productos\n");
				scanf("%f",&cantidad_productos);
					if (saldo>cantidad_productos*precio_chocolate){
						saldo-=cantidad_productos*precio_chocolate;
						printf("Su saldo actual es ahora de %f",saldo);

						printf("Si quieres comprar otros productos teclea 1\n");
						scanf("%i",&eleccion);
					} 
					else {
						printf("No te alcaza el saldo");
					}
				break;
		default: 
				printf("No ingresaste una cantidad válida\n");


				printf("Si quieres comprar otros productos teclea 1\n");
				scanf("%i",&eleccion);
	}//llave del switch

    }//llave de do 

    while (eleccion==1);

	return 0;
}