#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32) || defined(_WIN64)
	#include <Windows.h>
#else
	#include <unistd.h>
#endif 

void led(char color[3]);
void tabulacao_horizontal(int tamanho);
void montar_led(char color[3], int line, int column, int tab_h, int tab_v);
void tabulacao_vertical(int tamanho);
void limpar();

int main(void)
{
	const int time = 1;

	while (1)
	{
		montar_led("41", 3, 10, 30, 10); //vermelho
		sleep(time);

		limpar(); //limpa tela

		montar_led("43", 3, 10, 30, 10); //amarelo
		sleep(time);

		limpar();

		montar_led("42", 3, 10, 30, 10); //verde
		sleep(time);
		
		limpar();
		
		montar_led("44", 3, 10, 30, 10);
		sleep(time);
		
		//limpar();
	}
	return 0;
}

void tabulacao_horizontal(int tamanho)
{
	char tab[tamanho + 1];

	for (int i = 0; i < tamanho; i++)
	{
		tab[i] = ' ';
	}
	printf("%s", tab);
}

void tabulacao_vertical(int tamanho)
{
	char tab[tamanho + 1];
	
	for(int i = 0; i < tamanho; i++){
		tab[i] = '\n';
	}
	printf("%s", tab);
}

void montar_led(char color[3], int line, int column, int tab_h, int tab_v)
{
	system("clear"); //limpa o buffer
	tabulacao_vertical(tab_v);
	for (int i = 0; i < line; i++)
	{
		fflush(stdout);
		tabulacao_horizontal(tab_h);
		for (int j = 0; j < column; j++)
		{
			led(color);
		}
		printf("\n");
	}
}

void led(char color[3])
{
	printf("\033[%sm", color);
	printf(" ");
	printf("\033[0m");
}

void limpar()
{
	#if _WIN32 || _WIN64
		system("cls");
	#else
		system("clear");
	#endif
}
