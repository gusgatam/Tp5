#include <stdio.h>

int main() {
	int n[30], i;
	float P=0;
	for(i=0; i<30; i++) {
		printf("ingrese nota del alumno %d\n", i+1);
		scanf("%d", &n[i]);	
		P=P+n[i];
	}
	P=P/30;
	printf("el prpmedio de las notas es: %.2f\n", P);
	
	
	return 0;
}
