#include <stdio.h>
	
	int main() {
	int n[5], i,m=0;
	float P=0;
	for(i=0; i<5; i++) {
		printf("ingrese 1 numero\n");
		scanf("%d", &n[i]);	
		P=P+n[i];
		if (n[i]>m){
			m=n[i];	
		}
	}
	P=P/5;
	printf("el promedio entre los 5 numeros es: %.2f\n", P);
	printf("el numero mayor es: %d\n", m);
	
	
	return 0;
}
	
