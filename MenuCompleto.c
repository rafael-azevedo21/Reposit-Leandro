#include "MyLib.h"
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//Esse num é outra variável em comparação com a da função menu.
	int num;
	do
	{
		num=menu();
		//Para limpar o cache
		fflush(stdin);
		//Comando importado pela biblioteca stdlib, serve para limpar a tela do programa
		system("CLS");
		if(num>0 && num<16)
		{
			switch (num)
				{
					case 1 :
					{
						par();
						break;
					}
					
					case 2 :
					{
						potencia();
						break;
					}
					case 3 :
					{
						raiz();
						break;
					}
					
					case 4 :
					{
						bissexto();
						break;
					}
					
					case 5 :
					{
						mediaPond();
						break;
					}
					
					case 6 :
					{
						media();
						break;
					}
			
					case 7 :
					{
						primo();
						break;
					}
					
					case 8 :
					{
						fatorial();
						break;
					}
					case 9 :
					{
						fibo();
						break;
					} 
					case 10:
					{		
						matricula();
						break;
					}
					case 11:
					{
						caracteres();
						break;
					}
					case 12:
					{
						vogal();
						break;
					}
					case 13:
					{
						comparar();
						break;
					}
					case 14:
					{
						transf();
					}
					case 15:
					{
						concatenar();
					    break;
					}
						
				}
		}
		else if(num<0 || num>15 )
		{
			printf("Digite um numero valido \n");
		}
		else 
		{
			printf("Adios!");
		}
		
	}
	while(num!=0);
	return 0;
}
