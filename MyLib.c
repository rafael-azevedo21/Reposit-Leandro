#include "MyLib.h"
int menu(){
		int num;
		printf("Digite um numero de 0 a 9 \n");
		printf("[0] Para sair \n" 
				"[1] Para saber se o numero e par \n" 
				"[2] Para calcular uma potência \n" 
				"[3] Para calcular uma raiz \n" 
				"[4] Para saber se o ano é bissexto \n" 
				"[5] Para calcular a média ponderada de 3 notas \n"
				"[6] Para calcular a média \n" 
				"[7] Para saber se o número é primo \n"
				"[8] Para calcular o fatorial \n"
				"[9] Para imprimir a sequência de fibonacci \n"
				"[10] Para mostrar seu nome e matrícula \n"
				"[11] Para ver quantos caracteres um texto possui \n"
				"[12] Para ver quantas vogais tem no texto \n"
				"[13] Para comparar 2 textos e saber se são iguais ou diferentes \n"
				"[14] Para transferir um texto de uma variável para outra \n"
				"[15] Para concatenar 2 textos \n" );
						//Captar o que o usuário digitou e guardar em num
		scanf("%d", &num);
		return(num);

