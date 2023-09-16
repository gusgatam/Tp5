#include <stdio.h>

int main() {
	int n[20], i,a=0, b=0;
	for(i=0; i<20; i++) {
		printf("ingrese su sueldo\n");
		scanf("%d", &n[i]);	
		if (n[i] > 2000) {
			a = a+1;
		}
		else {
			b = b+1;
		}
	}
	printf("la cantidad de personas que ganaron mas de 2000 fueron: %d\n", a);
	printf("la cantidad de personas que ganaron menos de 2000 fueron: %d\n", b);
	return 0;
}
