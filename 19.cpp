//19.Realizar un programa que permita comprobar si un número mayor o igual que la unidad es primo.
#include <stdio.h>
#include <conio.h>
int main(){	
	int num;
	int resul;
	int bandera = 1;
	printf("Ingrese un numero: ");
	scanf("%d",&num);
	if(num>1){
		for(int i=2; i<num; i++){
			resul = num%i;
			if(resul == 0)
				bandera = 0;
		}
		if(bandera == 1)
			printf("\n%d es primo", num);
		else
			printf("\n%d no es primo", num);		 
	}
	else
		printf("\n%d no es primo", num);
			 
	getch();
	return 0;
}
