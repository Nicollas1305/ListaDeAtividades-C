#include <Stdio.h>
#include <locale.h>

int A, B;


main(){

	setlocale(LC_ALL, "Portuguese");
	

	printf ("\nEntre com um número:  ");
	scanf ("%i", &A);
	
	printf ("\nSeu antecessor é: %i, Seu sucessor é: %i", A-1, A+1);
}
