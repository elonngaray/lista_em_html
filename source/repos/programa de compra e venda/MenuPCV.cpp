#include<iostream>
#include "MenuPCV.h"
#include <string>


void MenuInicial()
{
	
	int Escolha = 0;
	do
	{
		std::cout << "*********Menu PCV*********\n\n\n";
		std::cout << "Precione 1 para Entrada de mercadoria: \n";
		std::cout << "Precione 2 para Venda de mercadoria: \n";
		std::cout << "Precione 3 para verificar estoque: \n";
		std::cout << "Precione 4 Sair: \n";
		std::cout << "Qual sua Escolha: ";
		std::cin >> Escolha;
		std::cout << "**************************\n";
		ProcEscolha(Escolha);
		
	} while (Escolha != 4);
	system("CLS");
}

void ProcEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1:std::cout << "Entrada de mercadoria\n";
		EntMercadoria();
		break;
	case 2:std::cout << "Saida de mercadoria\n";
		SaidaMercadoria();
		break;
	case 3:std::cout << "Estoque\n";
		GuardMercadoria();
		break;
	case 4:std::cout << "Fechar Programa\n";
		break;
	default:std::cout << "Opção inválida\n";
		break;
	}
}

void EntMercadoria()
{
	int Quantidade;
	int Saida = 0;
	float RecProduto[20][2];

	while (Saida != 1)
	{
		std::string Mercadoria;
		std::cout << "Mercadoria:\n";
		std::cin >> Mercadoria;
		std::cout << "Quantidade:\n";
		std::cin >> Quantidade;
		system("CLS");
		std::cout << "Sair: 1\tContinuar: 2\n";
		std::cin >> Saida;
		system("CLS");
		
	}		
	
}

void GuardMercadoria()
{


}

void SaidaMercadoria()
{
	std::cout << "Mercadoria: "<<"\n";
	std::cout << "Mercadoria: " << "\tQauntidade em estoque:";
	std::cout << "Tudo Bem\n";
}
