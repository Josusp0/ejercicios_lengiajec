#include <stdio.h>

int main(int argc, char *argv[]) {
	int num1,num2,num3, multi;
	
	printf ("Ingresa un numero entero \n");
	scanf ("%d", &num1);
	
	printf ("Ingresa un numero entero \n");
	scanf ("%d", &num2);
	
	multi = num1 * num2;
	printf ("%d", multi);
	return 0;
}


