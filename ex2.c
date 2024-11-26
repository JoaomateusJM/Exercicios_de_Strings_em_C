//Concatenando Strings:
//Leia duas strings e concatene-as, imprimindo o resultado.
//Crie uma função para concatenar duas strings.

#include <stdio.h>
#include <string.h>

// Função que concatena duas strings
char* concatenaStrings(char primeira[], char segunda[]) {
    // Definição de uma variável estática para armazenar o resultado da concatenação
    static char resultadoConcatenado[60];  // Tamanho suficiente para armazenar a concatenação das duas strings

    // Copia a primeira string para o resultado
    strcpy(resultadoConcatenado, primeira);

    // Concatena a segunda string ao final da primeira
    strcat(resultadoConcatenado, segunda);

    // Retorna o resultado concatenado
    return resultadoConcatenado;
}

int main() {
    // Declaração de duas variáveis para armazenar as strings a serem concatenadas
    char primeiraString[30], segundaString[30];

    // Solicita ao usuário para digitar a primeira string
    printf("Digite a primeira string: ");
    scanf("%s", primeiraString);  // Lê a primeira string

    // Solicita ao usuário para digitar a segunda string
    printf("Digite a segunda string: ");
    scanf("%s", segundaString);  // Lê a segunda string
    
    // Chama a função concatenaStrings para juntar as duas strings e exibe o resultado
    printf("Strings concatenadas: %s", concatenaStrings(primeiraString, segundaString));

}
