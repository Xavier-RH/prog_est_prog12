/* Autor: Xavier Romero Hernández, Realizado: 14/02/2022 
	Programa para una distribuidora de equipo de computo, la cual maneja 2 precios
		-Si estas dando de alta como un distribuidor, los precios tienen un 10% de descuentos
		-Si eres un cliente normal, los precios son sin descuento
	El programa preguntara al inicio si eres un distribuidor o un cliente normal y despues 
	preguntara la cantidad a pagar, debe calcular descuento y el total
	*/
	
#include <stdio.h>

int main(){
	int tipo;
	float cantidad, descuento=0, total;
	printf("Introduce el tipo de cliente (1.Distribuidor), (2.Cliente normal): ");
	scanf("%d",&tipo);
	printf("Cantidad a pagar: $");
	scanf("%f",&cantidad);
	
	if(tipo==1){
		descuento=cantidad*0.10;
	}
	total=cantidad-descuento;
	
	printf("Descuento:\t -$%.2f\n",descuento);
	printf("\t\t ------------\n");
	printf("Total:\t\t  $%.2f\n",total);
	
	return 0;
}
