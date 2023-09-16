#include <stdio.h>

int main() {
	int n[2], i;
	printf("ingrese un numero ");
	scanf("%d", &n[0]);
	printf("ingrese un segundo numero ");
	scanf("%d", &n[1]);
	
	if (n[0] > n[1]){
		for (i=n[1]+1;i<n[0];i++){
			printf("%d\n",i);
		}
	}
	else if (n[1] > n[0]){
		for (i=n[0]+1;i<n[1];i++){
			printf("%d\n",i);
		}
	}
	return 0;
}
