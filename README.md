# Semáforo

Este programa tem como principal objetivo desenhar na tela pixels coloridos que mudam de cor a cada segundo, sendo também possível controlar o tempo de alternância das cores no código fonte. O exemplo utilizado no programa tenta imitar um tipo simplificado de semáforo.

## Funções

O programa utiliza 3 bibliotecas padrão, sendo elas: 
- stdio: para realizar a saída no terminal
- stdlib: para a utilização da função system("cls") ou system("clear"), que tem sumo importância no programa, já que, ela limpa o terminal.
- Windows: <b>Ela só é incluída caso o sistema operacional seja Windows.</b> A função desta lib que é utilizada é a Sleep(), utilizada para esperar x segundos
- unistd: <b>Ela só é incluída caso o sistema operacional seja Unix.</b> A função desta lib que é utilizada é a sleep(), utilizada para esperar x segundos


## Função: led

A função led, tem como objetivo criar um caractere contendo um espaço, colori-lo e printa-lo.

Protótipo:
	led(char color[3]);
	
onde:
	color é um cor ANSII.

## Função: limpar

A função limpar limpa o terminal, usando system("clear") para sistema Unix e system("cls") para Windows.

Protótipo:
       limpar();
