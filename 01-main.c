#include <stdio.h> //biblioteca que ajuda por exemplo a escrever na tela e ler no teclado.

//declarando variaveis, recebendo dados do teclado, imprimindo na tela.

/*
    fora de uma função ou fora da função main, teremos variáveis globais
    deve-se ter cuidado em seu uso, pois gera alto acoplamento na funções que as utilizam, isso pode gera inconsistência no código.
*/

//alguns tipos de variaveis
int variavel_a = 1;
float variavel_b = 1.5;
char variavel_c = 'a';

/*
    escrevendo valores formatados:
    %c          escrita de um char
    %d ou %i    escrita de um inteiro
    %f          escrita de numero com ponto flutuante
    %s          escrita de string(vários caracteres)
    %p          escrita de um endereço de memória
*/


int main(){
    //impressão basica na tela usando printf com formatação de acordo com o padrão:
    //o \n é usado para quebra de linha
    printf("Hello World!\n \n");
    //imprime o valor no identificador %d, o valor passado ao lado como parâmetro por variavel_a
    printf("variavel_a = %d \n", variavel_a); 
    printf("variavel_b = %f \n", variavel_b);
    printf("variavel_c = %c \n", variavel_c);
    //neste caso imprime o valor do char dentro da tabela ASC
    printf("variavel_c = %d \n", variavel_c);
    printf("\n");
    //chamada da função declarada abaixo
    func1();
    func2();
    printf("\n");
    func3();

    return 0;
}

//variaveis locais declaradas em func1 e func2, por serem locais só existem para aquela função específica, portando valores e tipos diferentes apesar de mesmo nome.

//criação e declaração de função para ser chamada na função main(), compartimentando o código e facilitando o reúso; evitando escrita repetida.

func1(void){ 
int x = 10;
int y = 5;
 //b recebe resultaod da expressão
int b = x + y;
    printf("valor de x, y e b na func1: %d  %d  %d \n", x, y, b);
}


void func2(){
char x = 'a';
    printf("valor de x na func2: %c \n", x);
}

void func3(){
//criando variavel sem inicializá-la
int a; 
//cria uma string que é por padrão um vetor de chars(ou uma cadeia de caracteres)-será mais explorado mais para frente.
char b[30];
    printf("digite o valor de a: ");
    //função scanf usada para ler dados do teclado, recebe o tipo e o nome da variavel como parâmetro, o & indica que o valor digitado será armazenado na posição de memória separado para a.
    //scanf ainda pode ler varios valores de variáveis em um comando só
    scanf("%d", &a);

    printf("digite o valor de b: ");
    scanf("%s", &b);
    printf("\n");
    printf("a = %d \n", a);
    printf("b = %s \n", b);
}