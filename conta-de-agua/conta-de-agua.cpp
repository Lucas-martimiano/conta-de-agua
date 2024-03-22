// Author: Lucas Gomes Martimiano Ferreira
#include <iostream>

int main()
{
	int consumo;
	float precoConta;

	consumo = 0;
	precoConta = 7;

	while (consumo >=0 && consumo <= 103)
	{
		system("cls");
		printf("Olimpiadas Brasileiras de informatica - Unicamp - nivel (1) - Conta de agua - 2010\n");
		printf("Digite o consumo de agua da residencia em m^3:  ");
		scanf_s("%d", &consumo);

		if (consumo <=120 && consumo >= 0)
			if (consumo <= 10 && consumo >= 0)
			{
				precoConta = 7;
				printf("\nPreco da conta: R$ %.2f \n\n", precoConta);
			}
			else if (consumo <= 30 && consumo >= 11)
			{
				precoConta = 7 + (consumo - 10);
				printf("\nPreco da conta: R$ %.2f \n\n", precoConta);
			}
			else if (consumo <= 100 && consumo >= 31)
			{
				precoConta = 27 + ((consumo - 30) * 2);
				printf("\nPreco da conta: R$ %.2f \n\n", precoConta);
			}
			else if (consumo >= 100 && consumo <= 103)
			{
				precoConta = 167 + ((consumo - 100) * 5);
				printf("\nPreco da conta: R$ %.2f \n\n", precoConta);
			}
			else
			{
				printf("\nDigite um consumo em metros cubicos ate 103\n\n");
			}
		system("pause");
	}
}

