#include <conio.h>
#include <stdio.h> 
#include <locale.h>
#include <math.h>

main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolha=1;


	while (escolha!=5)
	{

	printf("\n");

	printf("\n 1- Atividade 01");
	printf("\n 2- Atividade 02 ");
	printf("\n 3- Atividade 03 ");
	printf("\n 4- Atividade 04 ");
	printf("\n 5- Atividade 05 ");
	printf("\n 6- Fechar Programa ");
	printf("\n\n Escolha uma opcao: ");
	scanf("%d",&escolha);


	switch (escolha) {

	case 1:
	{
	printf("\n\nAtividade 01 escolhida...\n");
	
	int A, B;


	printf ("\nEntre com um número:  ");
	scanf ("%i", &A);
	
	printf ("\nSeu antecessor é: %i, Seu sucessor é: %i\n\n\n", A-1, A+1);

	break;
	}

	case 2:
	{
	
	printf("\n\n Atividade 02 escolhida...\n\n");
	
	int dividendo, divisor, resto, quociente;
	printf("Entre com o dividendo:  ");
	scanf("%d", &dividendo);
	
	printf("Entre com o divisor:  ");
	scanf("%d", &divisor);
	
	quociente = dividendo / divisor;
	resto = dividendo % divisor;
	
	printf("\n\n O dividendo: %d, Divisor: %d, Resto: %d e Quociente: %d\n\n\n", dividendo, divisor, resto, quociente);
	break;
	}

	case 3:
	{
	
	printf("\n\n Atividade 03 escolhida...\n\n");
	
	int N, base;
	double Valorlog;
	
	printf("\n Entre com um número:  ");
	scanf("%d", &N);
	printf("\n Entre com a base: ");
	scanf("%d", &base);
	fflush(stdin);
	
	Valorlog = log(N)/log(base);
	
	printf("\n O log de %d na base %d é: %lf", N, base, Valorlog);
	
	break;
	}

	case 4:
	{
	
	printf("\n\n Atividade 04 escolhida...");
	
	double N;
	double result;
	
	printf("\n Entre com um número: ");
	scanf("%lf", &N);
	fflush(stdin);
	
	result = pow(N, 2);
	printf("\n %lf ao quadrado: %lf\n", N, result);

	result = pow(N, 8);
	printf("\n %lf Elevado a 8 é: %lf\n", N, result);
	
	result = sqrt(N);
	printf("\na Raiz quadrada de %lf é: %lf\n", N, result);
	
	result = pow(N,(double)(1/3));
	printf("\n A raiz cúbica de %lf é: %lf\n", N, result);
	
	result = pow(N,(double)(1/7));
	printf("\n A raiz sétima de %lf é: %lf\n", N, result);
	
	
	break;
	}


	case 5:
	{
	 	
	printf("\n\n Atividade 05 escolhida...");	
	
	float salario;
	float QW;
		
	printf("\n\n Valor do salário: ");
	scanf("%f", salario);
		
	printf("\n\n Quantidade de quilowatts gasta: ");
	scanf("%f", QW);	
		
		
	break;
	}
	
	
	default:
	{
	
	
	
	if( escolha==6)
	{
	continue;
	}
	
	printf("\n\n Nenhuma opcao foi escolhida ");
	break;
	}
	
	}
	
	}
	
	if( escolha==6)
	printf("\n\n O Programa foi fechado");
	
	getch(); 

}
