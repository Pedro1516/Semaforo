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

Protótipo:<br>
```C
void led(char color[3]);
```	
onde:<br>
&emsp;&emsp;`char color[3]` é uma cor ANSI.

## Função: limpar

A função limpar limpa o terminal, usando system("clear") para sistema Unix e system("cls") para Windows.

Protótipo:<br>
```C
void limpar();
```
## Função: tabulacao_vertical

Esta função imprime uma sequência de quebras de linhas, de acordo com tamanho. Ela é usada para que o saída seja impressa mais abaixo no terminal.

Protótipo: <br>
```C
void tabulacao_vertical(int tamanho);
```
onde: <br>
&emsp;&emsp; `int tamanho` é a quantidade de \n que será impresso na saída.

## Função: tabulacao_horizontal

Esta função imprime uma sequência de espaços, de acordo com tamanho. Ela é usada para que a próxima saída seja impressa mais a direita no terminal.

Protótipo: <br>
```C
void tabulacao_horizontal(int tamanho);
```
onde: <br>
&emsp;&emsp; `int tamanho` é a quantidade de ' ' que será impresso na saída.

## Função: montar_led

Protótipo: <br>
```C
void montar_led(char color[3], int line, int column, int tab_h, int tab_v)
```
onde:<br>
&emsp;&emsp; `char color[3]` é um código de cor ANSI.<br>
&emsp;&emsp; `int line` é a quantidade de linhas que serão pintadas, sendo que: a linha começa a ser pintada após o tab_h e termina no column.<br>
&emsp;&emsp; `int column` representa a quantidade de colunas a serem pintadas. O par line e column forma um pixel.<br>
&emsp;&emsp; `int tab_h` é o espaçamento horizontal.<br>
&emsp;&emsp; `int tab_v` é o espaçamento vertical. <br>


## Código de cores de fundo ANSI


| Código |	Cor         |
|--------|------------------|
| 40     | Preto (Black)    |
| 41     | Vermelho (Red)   |
| 42     | Verde (Green)    |
| 43	 | Amarelo (Yellow) |
| 44	 | Azul (Blue)      |
| 45	 | Magenta (Magenta)|
| 46     | Ciano (Cyan)     |
| 47     | Branco (White)   |

## Compilando e executando

Para compilar o programa em um sistema Unix, abra o terminal na pasta e digite o seguinte comando:
```shell
gcc -o semaforo main.c
```
Para executar o programa, digite o seguinte comando:
```shell
./semaforo
```

Para compilar o programa em um Sistema Operacional Windows, abra o prompt e digite o seguinte comando:
```shell
gcc -o semafaro main.c
```
Para executar, use:
```shell 
semaforo.exe
```

## Agradecimentos
Obrigado por ler até aqui! Esse programa foi feito com o intuito de aprender estruturas básicas de C e formatação do terminal. Fique a vontade para criar forks e enviar issues.<br>

#### Linguagens utilizadas 

<div style="display: inline_block"><br>
  <img align="center" alt="CSS" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">
</div>
