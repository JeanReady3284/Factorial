#include<stdio.h>

int main(){
	
	int i,n,factorial;
	
	printf("\n¿A que numero quiere sacarle factorial ?\n");
	scanf("%i",&n);
	
	factorial=1;
	for(i=1; i<=n; i++){
		factorial = factorial*i;
	}
	
	printf("\nEl factorial del numero [%i] es: %i \n",n,factorial);
}
