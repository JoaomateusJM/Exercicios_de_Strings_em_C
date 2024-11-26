
//Substituindo um Caractere por Outro:
//Leia uma string, um caractere a ser substituído e um caractere substituto. 
//Substitua todas as ocorrências do primeiro caractere pelo segundo.
#include <stdio.h>

int main() {
    char texto[35], caractereAntigo, caractereNovo;

    // Solicita que o usuário digite uma string
    printf("Digite uma string: ");
    scanf("%s", texto);

    // Corrige o problema com o caractere de nova linha no buffer de entrada
    printf("Digite o caractere a ser substituido: ");
    scanf(" %c", &caractereAntigo);  // O espaço antes de %c ignora o caractere de nova linha

    // Solicita o caractere novo para substituição
    printf("Para qual caractere?: ");
    scanf(" %c", &caractereNovo);  // O espaço antes de %c é importante aqui também

    // Laço para percorrer a string e substituir o caractere
    for (int indice = 0; texto[indice] != '\0'; indice++) {
        if (texto[indice] == caractereAntigo) {
            texto[indice] = caractereNovo;
        }
    }

    // Exibe a string após a substituição
    printf("String apos substituicao: %s\n", texto);

    return 0;
}
