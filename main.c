#include <stdio.h>

// Prototipação das funções
void saudacao();  // Declaração da função saudacao
int soma(int a, int b);  // Declaração da função soma

int main() {
    saudacao();  // Chama a função saudacao
    
    int resultado = soma(5, 3);  // Chama a função soma
    printf("A soma de 5 e 3 é: %d\n", resultado);
    
    return 0;
}