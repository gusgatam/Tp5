#include <stdio.h>

int main() {
	int n[4], i,m=0, T=0, l=0, acu=0;
	for(i=0; i<4; i++) {
		printf("ingrese numero del vendedor\n");
		scanf("%d", &n[i]);	
		printf("ingrese el total de unidades vendidas en 15 dias\n");
		scanf("%d", &T);
		acu=acu+T;
		if (T>m){
			m=T; 
			l=n[i];
		}
	}
	printf("El total de las ventas fue: %d\n", acu);
	printf("el vendedor con mayor venta fue: %d\n", l);
	printf("La venta del vendedor fue: %d\n", m);
	
	return 0;
}
