#include <stdio.h>
//Se debe mostrar la posición del alumno con nota superior a 8.
//No se realiza lo pedido.
int main() {
	int a[15],m[15],i,l=0;
	
	for (i=0;i<15;i++) {
		printf("Alumno numero %d\n",i+1); 
		printf("Ingrese su nota: ");
		scanf("%d", &a[i]);
		if (a[i]>=8) {
			l++;
			m[l]=i+1;
		}
	}
	
	if (l>0) {
		if (l==1) {
			printf("Solo hay un alumno con nota mayor o igual a 8 el cual es el numero ");
			printf("%d\n", m[1]);
		} else {
			printf("Los alumnos con nota mayor o igual a 8 son los numero ");
			for (i=1;i<=l;i++) {
				if (i==l) {
					printf("y %d\n", m[i]);
				} else {
					if (i == l - 1) {
						printf("%d ", m[i]);
					} else {
						printf("%d, ", m[i]);
					}
				}
			}
		}
	} else {
		printf("Ningun alumno posee nota igual o superior a 8\n");
	}
	
	return 0;
}
