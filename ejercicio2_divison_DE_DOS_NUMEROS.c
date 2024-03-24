#include <stdio.h>

int main(int argc, char *argv[]) {
	float num1,num2,num3;
	float division;
	printf ("Ingresa un numero entero \n");
	scanf ("%f", &num1);
	
	printf ("Ingresa un numero entero \n");
	scanf ("%f", &num2);
	
	division = num1/num2;
	printf (" %f", division);
	
	
	return 0;
}

