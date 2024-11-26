//Comparando Strings:
//Leia duas strings e compare-as, indicando se são iguais ou diferentes.

#include <stdio.h>

int main(){
    char primeiraString[30], segundaString[30];  // Declaração de duas strings com tamanho máximo de 30 caracteres
    int indice1 = 0, indice2 = 0, resultado = 0;  // Inicializa os índices das strings e a variável de resultado

    // Solicita ao usuário para digitar a primeira string
    printf("Digite a primeira string: ");
    scanf("%s", primeiraString);  // Lê a primeira string

    // Solicita ao usuário para digitar a segunda string
    printf("Digite a segunda string: ");
    scanf("%s", segundaString);  // Lê a segunda string

    // Laço while para comparar as strings caractere por caractere
    while (primeiraString[indice1] != '\0' && segundaString[indice2] != '\0'){  // Continua enquanto não encontrar o fim das duas strings
        if (primeiraString[indice1] != segundaString[indice2]){  // Se os caracteres são diferentes
            resultado = 1;  // Marca que as strings são diferentes
            break;  // Encerra o laço, pois as strings são diferentes
        }
        indice1++;  // Avança para o próximo caractere da primeira string
        indice2++;  // Avança para o próximo caractere da segunda string
    }

    // Após o laço, verifica se o resultado é 0 (strings iguais) ou 1 (strings diferentes)
    if (resultado == 0){
        printf("As strings sao iguais.");
    } else {
        printf("As strings sao diferentes.");
    }

}

