//Leitura e Impressão:
//Leia uma string e a imprima na tela.
//Leia duas strings e as imprima em linhas separadas.

#include <stdio.h>

int main()
{
    // Declaração de três variáveis do tipo char (strings) com tamanho máximo de 30 caracteres
    char primeiraString[30], segundaString[30], terceiraString[30];

    // Solicita que o usuário digite uma string e a armazena na variável 'primeiraString'
    printf("Digite uma string: ");
    scanf("%s", primeiraString);  // %s lê a string até o primeiro espaço em branco
    printf("String digitada: %s\n\n", primeiraString);  // Exibe a string digitada

    // Solicita que o usuário digite a segunda e terceira string
    printf("Digite a segunda string: ");
    scanf("%s", segundaString);  // Lê a segunda string
    printf("Digite a terceira string: ");
    scanf("%s", terceiraString);  // Lê a terceira string

    // Exibe as duas últimas strings em linhas separadas
    printf("String 2: %s\nString 3: %s\n", segundaString, terceiraString);  // Exibe as strings 2 e 3

}
