
//Quebrando uma String em Palavras:
//Leia uma frase e quebre-a em palavras, armazenando cada palavra em um vetor de strings.

#include <stdio.h>

int main() {
    char frase[60], palavraSeparada[60][60];
    int indicePalavra = 0, indiceCaractere = 0;

    printf("Digite uma frase: ");
    fgets(frase, 60, stdin);

    // Remover o caractere de nova linha, se presente
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }

    // Separar a frase em palavras
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i] == '\t') {
            // Caso tenha um espaço ou tabulação, termine a palavra
            if (indiceCaractere > 0) {  // Impede a criação de palavras vazias por múltiplos espaços consecutivos
                palavraSeparada[indicePalavra][indiceCaractere] = '\0';
                indicePalavra++;
                indiceCaractere = 0;
            }
        } else {
            // Caso contrário, armazene o caractere na palavra
            palavraSeparada[indicePalavra][indiceCaractere] = frase[i];
            indiceCaractere++;
        }
    }

    // Terminar a última palavra
    if (indiceCaractere > 0) {
        palavraSeparada[indicePalavra][indiceCaractere] = '\0';
    }

    // Exibir as palavras separadas
    printf("Palavras da string:\n");
    for (int i = 0; i <= indicePalavra; i++) {
        printf("%s\n", palavraSeparada[i]);
    }

    return 0;
}
