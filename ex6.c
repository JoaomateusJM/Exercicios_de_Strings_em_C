//Invertendo uma String:
//Leia uma string e inverta a ordem de seus caracteres.

#include <stdio.h>

int main() {
    char stringOriginal[30];  // Declara um array de caracteres para armazenar a string original
    int indiceEsquerda, indiceDireita, tamanhoString;

    // Solicita ao usuário para digitar uma string
    printf("Digite uma string: ");
    scanf("%s", stringOriginal);  // Lê a string do usuário (até o primeiro espaço)

    // Calcula o comprimento da string
    for (tamanhoString = 0; stringOriginal[tamanhoString] != '\0'; tamanhoString++);  
    // O laço percorre a string até encontrar o caractere nulo '\0', que marca o final da string,
    // e armazena o comprimento da string na variável 'tamanhoString'.

    // Laço para inverter a string
    for (indiceEsquerda = 0, indiceDireita = tamanhoString - 1; indiceEsquerda < indiceDireita; indiceEsquerda++, indiceDireita--) {
        // Troca os caracteres de 'indiceEsquerda' e 'indiceDireita'
        char temporario = stringOriginal[indiceEsquerda];  // Armazena o caractere da posição esquerda em uma variável temporária
        stringOriginal[indiceEsquerda] = stringOriginal[indiceDireita];  // Coloca o caractere da direita na posição da esquerda
        stringOriginal[indiceDireita] = temporario;  // Coloca o caractere armazenado temporariamente na posição da direita
    }

    // Imprime a string invertida
    printf("String invertida: %s\n", stringOriginal);

    return 0;
}

