//Removendo Espaços em Branco:
//Leia uma string e remova todos os espaços em branco no início e no final.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];  // Declara um array de caracteres para armazenar a string digitada
    int inicio = 0, fim;  // Variáveis para armazenar os índices do primeiro e último caractere não espaço

    // Solicita ao usuário que digite uma string, utilizando fgets para permitir espaços
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);  // Lê a string (com espaços) da entrada padrão
    texto[strcspn(texto, "\n")] = '\0';  // Remove o caractere de nova linha ('\n') do final da string

    // Ignora os espaços em branco no início da string
    while (texto[inicio] != '\0' && isspace(texto[inicio])) {
        inicio++;  // Move o índice "inicio" até o primeiro caractere não espaço
    }

    // Define o índice "fim" como o último caractere da string
    fim = strlen(texto) - 1;

    // Ignora os espaços em branco no final da string
    while (fim >= inicio && isspace(texto[fim])) {
        fim--;  // Move o índice "fim" para a esquerda até encontrar um caractere não espaço
    }

    // Cria uma nova string sem os espaços no início e no final
    for (int i = 0; i <= fim - inicio; i++) {
        texto[i] = texto[inicio + i];  // Copia a substring sem os espaços para o início da string
    }

    texto[fim - inicio + 1] = '\0';  // Adiciona o caractere nulo para terminar a nova string

    // Exibe a string sem os espaços no início e no final
    printf("String sem espaços no início e no final: '%s'\n", texto);

    return 0;
}
