//Criando um Programa Simples de Busca e Substituição: (Desafio)
//Leia um texto, uma palavra a ser buscada e uma palavra para substituição.
//Substitua todas as ocorrências da primeira palavra pela segunda.


#include <stdio.h>
#include <string.h>

int main() {
    char texto[100], palavraOriginal[20], palavraSubstituta[20], resultado[120];
    int i = 0, indiceResultado = 0;

    // Leitura da string com espaços
    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    // Remover o caractere de nova linha, caso presente
    if (texto[strlen(texto) - 1] == '\n') {
        texto[strlen(texto) - 1] = '\0';
    }

    // Leitura da palavra a ser substituída e a palavra substituta
    printf("Digite a palavra a ser substituída: ");
    scanf("%s", palavraOriginal);
    printf("Para qual palavra substituir?: ");
    scanf("%s", palavraSubstituta);

    int tamanhoOriginal = strlen(palavraOriginal);
    
    // Processar a string
    while (texto[i] != '\0') {  // Enquanto não chegarmos ao final da string
        // Verifica se a palavraOriginal é encontrada na string
        if (strncmp(&texto[i], palavraOriginal, tamanhoOriginal) == 0) {
            // Se encontrada, substitui pela palavraSubstituta
            for (int j = 0; palavraSubstituta[j] != '\0'; j++, indiceResultado++) {
                resultado[indiceResultado] = palavraSubstituta[j];
            }
            i += tamanhoOriginal;  // Avança o índice de texto pelo comprimento da palavraOriginal
        } else {
            // Se não encontrada, copia o caractere original
            resultado[indiceResultado++] = texto[i++];
        }
    }

    // Adiciona o caractere de fim de string
    resultado[indiceResultado] = '\0';

    // Exibe o resultado
    printf("String nova: %s\n", resultado);

    return 0;
}
