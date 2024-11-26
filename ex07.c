
//Contando Ocorrências de um Caractere:
//Leia uma string e um caractere, e conte quantas vezes o caractere aparece na string.

#include <stdio.h>

int main() {
    char texto[35], caracterParaVerificar;  // Declara um vetor de caracteres para a string e uma variável para o caractere a ser verificado
    int indice, contadorDeOcorrencias = 0;  // Variáveis para percorrer a string e contar as ocorrências

    // Solicita ao usuário que digite uma string
    printf("Digite uma string: ");
    scanf("%s", texto);  // Lê a string do usuário (até o primeiro espaço)

    // Solicita ao usuário que informe o caractere a ser verificado
    printf("Qual caractere voce quer verificar? \n");
    scanf(" %c", &caracterParaVerificar);  // Lê o caractere a ser verificado. O espaço antes de %c é necessário para limpar o buffer

    // Laço para percorrer cada caractere da string
    for (indice = 0; texto[indice] != '\0'; indice++) {
        // Verifica se o caractere atual é igual ao que o usuário quer verificar
        if (texto[indice] == caracterParaVerificar) {
            contadorDeOcorrencias++;  // Incrementa o contador de ocorrências
        }
    }

    // Exibe o número de vezes que o caractere aparece na string
    printf("O caractere '%c' aparece %d vezes na string\n", caracterParaVerificar, contadorDeOcorrencias);

    return 0;
}
