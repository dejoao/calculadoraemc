#include <stdio.h>

int main()
{
    char operacao;
    double numero1, numero2, resultado;
    printf("Bem vindo, a calculadora!\n");
    printf("Digite a operação que gostaria de fazer (/, *, -, +):\n");
    scanf("%c", &operacao);
    printf("Digite o primeiro numero:");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero:");
    scanf("%lf", &numero2);
    switch(operacao) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '/':
            if(numero2 == 0) {
                printf("Divisão por 0 não é permitida");
                return 1;
            } else {
                resultado = numero1 / numero2;
            }
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        default:
            printf("Erro: você escreveu uma operação inválida");
            return 1;
    }
    printf("%.1lf %c %.1lf = %.1lf", numero1, operacao, numero2, resultado);
    return 0;
}
