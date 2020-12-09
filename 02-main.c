#include <stdio.h>
#include <stdlib.h>
//constantes, condicionais, operadores, cálculos básicos


/*
    -constante declarada, seu valor nunca se modifica, será visto mais a frente diversas formas de utilização
    -é uma boa pratica usar letras maiusculas pra declarar constantes
    neste caso criado 2 constantes SIM e NAO que podem servir para facilitar leitura de código em testes condidionais e validação... -será visto mais para frente...
    -outra forma de declarar uma constante é usando #define
    -a diferença entre declarar como const e define: da primeira forma será armazenado na memória a constante SIM e NAO sendo 1 e 0.
    define funciona como uma substituição quando o programa for compilado.
*/
const int SIM = 1, NAO = 0;
#define PI 3.1415



int main() {
    printf("\n");
    printf("constante SIM e NAO e PI = %d e %d e %f \n", SIM, NAO, PI);  
    
    int a, b, c;
    a = 5;
    b = 2;
    c = 0;
    /*  ordem de precedência 
        () [] ->
        ! ~ ++ -- - (tipo) * & Sizeof
        * / %
        + - 
        << >>
        < <= > >=
        == !=
        &
        ^
        !
        &&
        !!
        ?:
        = += -= *= /=
    */
    //pode ser usado para inteiro, char, float
    printf("a + b = %d \n", a+b); 
    printf("a - b = %d \n", a-b);
    printf("a * b = %d \n", a*b);
    //se ambos forem inteiros o resultado é um inteiro, se um dos elementos for real, o resultado será real
    printf("a / b = %d \n", a/b); 
    //resto
    printf("a %% b = %d \n", a%b);
    //testando precedência
    c = a + b + 10 / 2.0;
    printf("c = %d \n", c);
    c = a + (b + 10) / 2.0;
    printf("c = %d \n", c);  
    printf("\n");
    
    

    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 = 'A';
    float f1, f2 = 5.25, f3 = 10.5;

    x1 = x2 + x3;
    //neste caso foi somado os valores que representam os caracteres na tabela ASC então retornado o caractere equivalente ao resultado.
    ch1 = ch2 + ch3;
    f1 = f2 + f3;

    printf("x1 = %d \n", x1);
    printf("ch1 = %c (%d) \n", ch1, ch1);
    //utilizdo %.2f para imprimir apenas 2 cadas decimais
    printf("f1 = %.2f \n", f1);

    //incremento ou decremento = ++ -- += -=
    printf("\n");
    printf("pre-incremento a = %d \n", ++a);
    //imprime e depois imprementa
    printf("pos-incremento a = %d \n", a++);
    //imprime a após ter o valor incrementado
    printf("pos-incremento a = %d \n", a);

    printf("\n");
    //operadores relacionais retornam booleano ou seja  0 ou 1
    // > >= < <= == != (operadores aritméticos possuem maior precedência)

    printf("a > b = %d \n", a > b);
    printf("a < b = %d \n", a < b);
    printf("a >= b = %d \n", a >= b);
    printf("a <= b = %d \n", a <= b);
    printf("a == b = %d \n", a == b);
    printf("a != b = %d \n", a != b);
    //com operação aritmética
    printf("a + 15 < b = %d \n", a + 15 < b);

    printf("\n");
    //operadores lógicos && || !
    printf("(a > 2) && (b > a) = %d \n", (a > 2) && (b > a));
    printf("!((a > 2) && (b > a)) = %d \n", !((a > 2) && (b > a)));
    printf("(a > 2) || (b > a) = %d \n", (a > 2) || (b > a));

    return 0;
}