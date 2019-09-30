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
		//O que será mostrado ao iniciar o programa
		printf("Digite um numero de 0 a 9 \n");
		printf("0 Para sair \n" 
				"[1] Para saber se o numero e par \n" 
				"[2] Para calcular uma potência \n" 
				"[3] Para calcular uma raiz \n" 
				"[4] Para saber se o ano é bissexto \n" 
				"[5] Para calcular a média ponderada de 3 notas \n"
				"[6] Para calcular a média \n" 
				"[7] Para saber se o número é primo \n"
				"[8] Para calcular o fatorial \n"
				"[9] Para imprimir a sequência de fibonacci \n"
				"[10] Para mostrar seu nome e matrícula \n" );
		//Captar o que o usuário digitou e guardar em num
		scanf("%d", &num);
		//Comando importado pela biblioteca stdlib, serve para limpar a tela do programa
		system("CLS");
		
		if(num>0 && num<11)
		{
			switch (num)
				{
					case 1 :
					{
						//O objetivo aqui era saber se o núemro era par, ou seja divisivel por 2
						int num2;
						int resto;
						printf("Digite um numero inteiro: \n");
						scanf("%d", &num2);
						resto=num2%2;
						if(resto == 0)
						//Se ele for par, a divisão dele por 2 terá resto 0, caso contrário ele será impar
					{
						printf("Esse numero e par \n");
					}else if(resto !=0)
						printf("Esse numero e impar \n");
					break;
					}
					
					case 2 :
					{
						//Nesse, o objetivo era calcular a potenciação de um número de ponto flutuante elevado a um inteiro
						float numA, resultado;
						int numB;
						printf("Insira um numero de ponto flutuante: ");
						scanf("%f", &numA);
						printf("Insira um numero inteiro: ");
						scanf("%d", &numB);
						resultado = pow(numA, numB);
						//Para realizar essa função, foi utilizado o comando pow introduzido pela biblioteca math
						printf("Valor da potência: 	%.3e \n", resultado );
						break;
					}
					case 3 :
					{
						/*Nesse, o objetivo era calcular a raiz de um número de ponto flutuante
						 tendo como índice um númeor inteiro*/
						float numA1, resultado1;
						int numB1;
						printf("Insira um numero de ponto flutuante: ");
						scanf("%f", &numA1);
						printf("Insira um numero inteiro: ");
						scanf("%d", &numB1);
						resultado1 = pow(numA1, 1./numB1);
						//Para isso, utilizei o mesmo comando pow, usando uma das  propriedades de potenciação.
						printf("Valor da raiz: 	%.3e \n", resultado1);
						break;
					}
					
					case 4 :
					{
						//Aqui, o objetivo do programa era ler um ano dado pelo usuário e informar se ele é bissexto ou não
						int ano,bissexto;
						printf(" Digite um ano para descobrir se ele é bissexto: ");
						scanf("%d", &ano);
						bissexto = ano%4;
						/*Sabendo que todo ano bissexto é multiplo de 4,
						 sua divisão por 4 tem que ter como resto 0, caso dê algo diferente disso, não é bissexto.*/
						if(bissexto==0){
							printf("O ano é bissexto \n");
						}
						else{
							printf("O ano não é bissexto \n");
						}
						break;
					}
					
					case 5 :
					{
						/*O objetivo desse case era calcular a média ponderada de 3 notas.
					 	Onde as duas primerias tem peso 1 e a terceira tem peso 3*/
						float nota1,nota2,nota3,media;
						printf ("Digite sua primeira nota");
						scanf("%f", &nota1);
						printf ("Digite sua segunda nota");
						scanf("%f", &nota2);
						printf("Digite sua terceita nota");
						scanf("%f", &nota3);
						media=(nota1+nota2+2*nota3)/4;
						/*Para realizar tal função, o programa recebe os valores digitados pelo usuário,
						 multiplica pelos respectivos pesos e divide pelo número total deldes.*/
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
						//Nesse programa, o objetivo além de calcular a média é verificar se as notas digitadads são válidas
						float nota1, nota2,media;
						printf("Digite sua primeira nota: ");
						scanf("%f", &nota1);
						if (nota1>=0 && nota1<=10)
						/*Tomando a nota minima como 0 e a máxima como 10, tem-se essa estrutura if
						, caso o usuário digite uma nota inválida, encerra-se o case e se reexibe o menu*/
						{
							printf("Digite sua Segunda nota: ");
							scanf("%f", &nota2);
							if (nota2 >= 0 && nota2 <= 10)
							{
								media= (nota1 + nota2)/2;
								printf("Sua média é: %f \n", media);
							}
							else{
								printf("Nota inválida \n");
								break;
							}
						}
						else
						printf("Nota inválida \n");
						break;
					}
			
					case 7 :
					{
						int num;
						int cont=0; 
						int i;
						printf("Digite um número para saber se ele é primo ou não");
						scanf("%f", &num);
						for(i=0;i<=num;i++)
						{
							if(num%i==0)
							{
								cont++;

							}	
						}
						if(cont==2)
						{
							printf("O numero e primo");
						}
						else if(cont!=2)
						{
							printf("O número nao e primo");
						}
						break;
					}
					
					case 8 :
					{
						int contador;
						int num,result=1;
						printf("Digite um número para saber o seu fatorial.\n ");
						scanf("%d", &num);
						for(;num>=1 ;num=num-1)
						//Dessa forma, vai pegar todos os antecessores do número digitado até chegar a 1
						{
							result= result*num; 
						}
						printf("O fatorial do número digitado é: %d \n", result);

							break;
					}
					case 9 :
					{
						int num;
						int i;
						int fibo2=1;
						int fibo1=1;
						int soma;
						printf("Digite um número para imprimir a sequencia de fibo até ele: ");
						scanf("%d", &num);
						for(i=1; i<=num; i++){
							if(i==1||i==2){
								printf(" %d \n", fibo1 );
							}
							else{
								 //fibo2 vai servir para acumular o valor passado
								soma=fibo1+fibo2;
								fibo1=fibo2;
								fibo2=soma;
								printf("%d \n", soma);
							}
						}
							break;
					}
					case 10:
					{		
						char nome[60];
						int matricula;
						
						printf("Digite seu nome: \n");
						scanf("%s", &nome);
						
						printf("Digite sua matrícula: \n");
						scanf("%d", &matricula);
						//A troca de %s para %2X serve para converter de decimal para hexadecimal.
						printf("Olá %s, sua matrícula em Hexadecimal é: %2X \n", nome, matricula );
						break;
					}
					default:
							printf("Valor Inexistente \n");
							break;
						
				}
		}
		else if(num<0 || num>10 )
		{
			printf("Digite um numero valido \n");
		}
		else 
		{
			printf("Adios!");
		}
		
	}
	while(num!=0);
	
}
