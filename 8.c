#include <stdio.h>

int main() {
	int a[3]={0,1,0}, i, num;
	
	printf("ingrese un num para ver su secuencia en fibonacci: ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		if (i <= 1) {
			a[2] = i;
		} else {
			a[2]=a[0]+a[1];
			a[0]=a[1];
			a[1]=a[2];		}
		
		printf("%d ", a[2]);
	}
return 0;
}
