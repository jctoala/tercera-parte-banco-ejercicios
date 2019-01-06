//18.Realizar un programa que cuente las veces que aparece una determinada letra en una frase que se introducirá por teclado.
#include <stdio.h>
#include <conio.h>
int main(){	
	char frase[20];
	char letra;
	int cont_letra=0;
	printf("Ingrese una frase: ");
	gets(frase);
	printf("Ingrese letra a buscar en la frase: ");
	fflush(stdin);//elimina caracteres en memoria.
	scanf("%c",&letra);
	for(int i=0; frase[i]!='\x0'; i++)
		if(frase[i]==letra)
			cont_letra++;
	printf("Se ha encontrado la letra '%c' un total de: %d veces", letra, cont_letra);
	
	getch();
	return 0;
}
