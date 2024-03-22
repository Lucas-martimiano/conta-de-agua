// Author: Lucas Gomes Martimiano Ferreira
#include <iostream>

int main()
{
	int consumo, precoConta;
	
	precoConta = 7;

	printf("Olimpiadas Brasileiras de informatica - Unicamp - nivel (1) - Conta de agua - 2010\n");
	printf("Digite o consumo de agua da residencia em m^3:  ");
	scanf_s("%d", &consumo);

	if (consumo <=120 && consumo >= 0)
		if (consumo <= 10 && consumo >= 0)
		{
			precoConta = 7;
		}
		else if (consumo <= 30 && consumo >= 11)
		{
			precoConta = 7 + (consumo - 10);
		}
		else if (consumo <= 100 && consumo >= 31)
		{
			precoConta = 27 + ((consumo - 30) * 2);
		}
		else if (consumo > 100)
		{
			precoConta = 167 + ((consumo - 100) * 5);
		}

	printf("\nPreco da conta: %d\n\n", precoConta);

}

