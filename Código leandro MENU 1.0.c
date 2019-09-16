#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	do
	{
		printf("Digite um numero de 0 a 9");
		printf("0 Para sair \n" 
				"[1] Para saber se o numero e par \n" 
				"[2] Para calcular uma pot�ncia \n" 
				"[3] Para calcular uma raiz \n" 
				"[4] Para saber se o ano � bissexto \n" 
				"[5] Para calcular a m�dia ponderada de 3 notas \n"
				"[6] Para calcular a m�dia \n" 
				"[7] Para mostrar seu nome e matr�cula \n"
				"[8] Para calcular o fatorial \n"
				"[9] Para saber se o n�mero � primo \n"
				"[10] Para mostrar seu nome e matr�cula \n" );
				
		scanf("%d", &num);
		
		system("CLS");
					
		if(num>0 && num<11)
		{
			switch (num)
				{
					case 1 :
					{
						//O objetivo aqui era saber se o n�emro era par, ou seja divisivel por 2
						int num2;
						int resto;
						printf("Digite um numero inteiro: \n");
						scanf("%d", &num2);
						resto=num2%2;
						if(resto == 0)
						//Se ele for par, a divis�o dele por 2 ter� resto 0, caso contr�rio ele ser� impar
					{
						printf("Esse numero e par \n");
					}else if(resto !=0)
						printf("Esse numero e impar \n");
					break;
					}
					
					case 2 :
					{
						//Nesse, o objetivo era calcular a potencia��o de um n�mero de rponto flutuante elevado a um inteiro
						float numA, resultado;
						int numB;
						printf("Insira um numero de ponto flutuante: ");
						scanf("%f", &numA);
						printf("Insira um numero inteiro: ");
						scanf("%d", &numB);
						resultado = pow(numA, numB);
						//Para realizar essa fun��o, foi utilizado o comando pow introduzido pela biblioteca math
						printf("Valor da pot�ncia: 	%.3e \n", resultado );
						break;
					}
					case 3 :
					{
						/*Nesse, o objetivo era calcular a raiz de um n�mero de ponto flutuante
						 tendo como �ndice um n�meor inteiro*/
						float numA1, resultado1;
						int numB1;
						printf("Insira um numero de ponto flutuante: ");
						scanf("%f", &numA1);
						printf("Insira um numero inteiro: ");
						scanf("%d", &numB1);
						resultado1 = pow(numA1, 1./numB1);
						//Para isso, utilizei o mesmo comando pow, usando uma das  propriedades de potencia��o.
						printf("Valor da raiz: 	%.3e \n", resultado1);
						break;
					}
					
					case 4 :
					{
						//Aqui, o objetivo do programa era ler um ano dado pelo usu�rio e informar se ele � bissexto ou n�o
						int ano,bissexto;
						printf(" Digite um ano para descobrir se ele � bissexto:");
						scanf("%d", &ano);
						bissexto = ano%4;
						/*Sabendo que todo ano bissexto � multiplo de 4,
						 sua divis�o por 4 tem que ter como resto 0, caso d� algo diferente disso, n�o � bissexto.*/
						if(bissexto==0){
							printf("O ano � bissexto \n");
						}
						else{
							printf("O ano n�o � bissexto \n");
						}
						break;
					}
					
					case 5 :
					{
						/*O objetivo desse case era calcular a m�dia ponderada de 3 notas.
					 	Onde as duas primerias tem peso 1 e a terceira tem peso 3*/
						float nota1,nota2,nota3,media;
						printf ("Digite sua primeira nota");
						scanf("%f", &nota1);
						printf ("Digite sua segunda nota");
						scanf("%f", &nota2);
						printf("Digite sua terceita nota");
						scanf("%f", &nota3);
						media=(nota1+nota2+2*nota3)/4;
						/*Para realizar tal fun��o, o programa recebe os valores digitados pelo usu�rio,
						 multiplica pelos respectivos pesos e divide pelo n�mero total deldes.*/
						if(media>= 6){
							printf("Sua media e %f e voce foi aprovado \n", media);
						}
						else{
							printf("Sua media e %f e voce foi reprovado \n", media);
						}
						break;
					}
					
					case 6 :
					{
						//Nesse programa, o objetivo al�m de calcular a m�dia � verificar se as notas digitadads s�o v�lidas
						float nota1, nota2,media;
						printf("Digite sua primeira nota");
						scanf("%f", &nota1);
						if (nota1>=0 && nota1<=10)
						/*Tomando a nota minima como 0 e a m�xima como 10, tem-se essa estrutura if
						, caso o usu�rio digite uma nota inv�lida, encerra-se o case e se reexibe o menu*/
						{
							printf("Digite sua Segunda nota");
							scanf("%f", &nota2);
							if (nota2 >= 0 && nota2 <= 10)
							{
								media= (nota1 + nota2)/2;
								printf("Sua m�dia �: %f \n", media);
							}
							else{
								break;
							}
						}
						else
						break;
					}
			
					case 7 :
					{
							printf ("  \n");
							break;
					}
					
					case 8 :
					{
						
							printf ("\n");
							break;
					}
					case 9 :
					{
							printf (" \n");
							break;
					}
					case 10:
					{		
						char nome[60];
						int matricula;
						
						printf("Digite seu nome: \n");
						scanf("%s", &nome);
						
						printf("Digite sua matr�cula: \n");
						scanf("%d", &matricula);
						
						printf("Ol� %s, sua matr�cula em Hexadecimal �: %2X \n", nome, matricula );
						break;
					}
					default:
							printf("Valor Inexistente \n");
							break;
						
				}
		}
		else if(num<0 || num>10 )
		{
			printf("Digite um numero valido");
		}
		else 
		{
			printf("Adios!");
		}
		
	}
	while(num!=0);
	
}
