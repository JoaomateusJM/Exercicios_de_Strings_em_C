//Convertendo para Maiúsculas/Minúsculas:
//Leia uma string e converta todas as letras para maiúsculas ou minúsculas.

#include <stdio.h>

int main()
{
    char texto[40];  // Declara um array de caracteres para armazenar a string digitada
    int indice;  // Variável para percorrer os caracteres da string

    // Solicita ao usuário para digitar uma string
    printf("Digite uma string: ");
    scanf("%s", texto);  // Lê a string digitada pelo usuário (até o primeiro espaço)

    // Verifica se o primeiro caractere da string é uma letra minúscula
    if (texto[0] >= 'a' && texto[0] <= 'z')  // Checa se o primeiro caractere está entre 'a' e 'z'
    {
        // Laço para percorrer a string e converter todos os caracteres para maiúsculas
        for (indice = 0; texto[indice] != '\0'; indice++)
        {
            texto[indice] = texto[indice] - 32;  // Converte a letra minúscula para maiúscula subtraindo 32
        }
        // Imprime a string convertida para maiúsculas
        printf("String em maiusculas: %s\n", texto);
    }
    else
    { 
        // Laço para percorrer a string e converter todos os caracteres maiúsculos para minúsculos
        for (indice = 0; texto[indice] != '\0'; indice++)
        {
            // Verifica se o caractere é uma letra maiúscula
            if (texto[indice] >= 'A' && texto[indice] <= 'Z')  // Checa se o caractere está entre 'A' e 'Z'
            {
                texto[indice] = texto[indice] + 32;  // Converte a letra maiúscula para minúscula somando 32
            }
        }
        // Imprime a string convertida para minúsculas
        printf("String em minusculas: %s\n", texto);
    }

    return 0;
}

