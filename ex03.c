//Calculando o Comprimento:
//Leia uma string e calcule o seu comprimento, sem usar a função strlen.

#include <stdio.h>

int main(){
    char stringUsuario[30];  
    int indice = 0;  
    
    printf("Digite uma string: ");
    scanf("%s", stringUsuario);

    while (stringUsuario[indice] != '\0'){  
        indice++;
    }

    printf("Comprimento da string: %d", indice);

}
