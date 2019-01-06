//17.Imprimir, contar y sumar los múltiplos de 2 que hay entre una serie de números, tal que el segundo sea mayor o igual que el primero.
#include <stdio.h>
#include <conio.h>
int main(){	
	int num1, num2, aux;
	int cont=0, acum=0;
	printf("\tIngrese dos numeros\n");
	printf("\nIngrese primer numero: ");
	scanf("%d",&num1);
	printf("Ingrese segundo numero: ");
	scanf("%d",&num2);
	if(num2<num1){
		aux = num2;
		num2 = num1; 
		num1 = aux;//por validación del programa
	}
	printf("\nEstos son los multiplos de 2 que hay entre %d y %d\n", num1, num2);
	while(num1<=num2){
		if(num1%2==0){
			printf("%d\n",num1);
			cont++;
			acum += num1;
		}
		num1++;
	}
	printf("\nHay %d multipos\n", cont);
	printf("La suma de ellos es %d", acum);
	
	getch();
	return 0;
}
