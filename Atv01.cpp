#include <Stdio.h>
#include <locale.h>

int A, B;


main(){

	setlocale(LC_ALL, "Portuguese");
	

	printf ("\nEntre com um n�mero:  ");
	scanf ("%i", &A);
	
	printf ("\nSeu antecessor �: %i, Seu sucessor �: %i", A-1, A+1);
}
