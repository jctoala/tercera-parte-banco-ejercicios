/*15.	Introducir dos n�meros por teclado, imprimir los n�meros naturales que hay entre ambos n�meros empezando por el m�s peque�o, 
contar cuantos hay y cu�ntos de ellos son pares. Calcular la suma de los impares.*/
#include <stdio.h>
#include <conio.h>
int main(){
	int mayor, menor, aux;
	int contador=0;
	int cont_par=0, acum_impar=0;
	printf("\tIngrese dos numeros\n");
	printf("\nIngrese numero: ");
	scanf("%d",&mayor);
	printf("Ingrese numero: ");
	scanf("%d",&menor);
	if(mayor<menor){
		aux = mayor;
		mayor = menor; 
		menor = aux;
	}
	printf("\nNumeros naturales que hay entre ambos numeros\n");
	while(menor<=mayor){
		printf("%d\n",menor);
		aux = menor%2;
		if(aux==0)
			cont_par++;
		else
			acum_impar += menor;
		contador++;
		menor++;
	}
	printf("\nHay un total de %d numeros.",contador);
	printf("\nSon pares %d numeros.",cont_par);
	printf("\nY la suma de los impares es %d.",acum_impar);
		
	getch();
	return 0;
}
