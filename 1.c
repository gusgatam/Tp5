#include <stdio.h>

int main() {
	int r[5], RT=0, i;
	
	for(i=0; i<5; i++) {
		printf("ingrese 1 resistencia\n");
		scanf("%d", &r[i]);	
		
		RT=RT+r[i];
	}
	printf("\nLa resistencia 1 es: %d\n", r[0]);
	printf("\nLa resistencia 2 es: %d\n", r[1]);
	printf("\nLa resistencia 3 es: %d\n", r[2]);
	printf("\nLa resistencia 4 es: %d\n", r[3]);
	printf("\nLa resistencia 5 es: %d\n", r[4]);
	printf("\nLa resistencia total es: %d\n", RT);
	
	return 0;
}
