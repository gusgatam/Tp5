#include <stdio.h>

int main(){
	int v[11],i,suma,multi,prom;
	float pr;
	pr=0; multi=1; prom=0;
	printf("Ingrese 10 numeros para saber su suma, su producto, promedio y cuantos debajo del promedio\n");
	for(i=1;i<=10;i++){
		printf("Ingrese numero %d: ", i);
		scanf("%d",&v[i]);
		pr=pr+v[i];
		multi=multi*v[i];
	}
	suma=pr;
	pr=pr/10;
	printf("La suma de los numeros ingresados es %d\n",suma);
	printf("El producto de los numeros ingresados es %d\n",multi);
	printf("El promedio de los numeros ingresados es %.2f\n",pr);
	for(i=1;i<=10;i++){
		if(v[i]<pr){
			prom++;
		}
	}
	printf("La cantidad de ingresos por debajo del promedio es %d\n",prom);
	
}
	
