
//Verificando se uma String é Palíndromo:
//Leia uma string e verifique se ela é um palíndromo (lê-se da mesma forma de trás para frente).

#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    printf("Digite uma string: ");
    scanf("%s", str);  // Lê a string do usuário

    int i, j;
    int is_palindrome = 1;  // Assume que a string é um palíndromo (flag)

    // Laço para comparar caracteres da string de ambos os lados
    for (i = 0, j = strlen(str) - 1; j > i; i++, j--) {
        if (str[i] != str[j]) {  // Se os caracteres forem diferentes
            is_palindrome = 0;  // Marca a string como não palíndromo
            break;  // Interrompe o laço, pois não é necessário continuar
        }
    }

    // Verifica o valor de is_palindrome e imprime a mensagem correspondente
    if (is_palindrome) {
        printf("A string eh um palindromo.\n");
    } else {
        printf("A string nao eh um palindromo.\n");
    }

    return 0;
}
