//16.	Imprimir diez veces la serie de números del 1 al 10
#include <stdio.h>
#include <conio.h>
int main(){	
	for(int i=0; i<10; i++){
		printf("Serie %d\n",i+1);
		for(int j=1; j<=10; j++)
			printf("%d\n",j);
		printf("\n");	
	}
	
	getch();
	return 0;
}
