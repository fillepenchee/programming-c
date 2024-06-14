#include <stdio.h>
#include <stdlib.h>

main() {

int operacao;
double num1, num2;
double result;

printf("Favor digitar operacao desejada:\n"
           "1. Soma\n"
           "2. Subtracao\n"
           "3. Multiplicacao\n"
           "4. Divisao\n"
           "0. SAIR DO PROGRAMA\n");
scanf("%i", &operacao);

if (operacao == 0){
        printf("\n Obrigada por usar a minha calculadora!");
        return(0);
}

while (operacao < 1 || operacao > 4){
        printf("%i", operacao);
    printf("Numero invalido. Favor digitar operacao desejada:\n"
           "1. Soma\n"
           "2. Subtracao\n"
           "3. Multiplicacao\n"
           "4. Divisao\n"
           "0. SAIR DO PROGRAMA\n");
    scanf("%i", &operacao);
}

printf("Digite o primeiro numero para realizar operacao:\n");
scanf("%lf", &num1);
printf("Digite o segundo numero para realizar operacao:\n");
scanf("%lf", &num2);

if (operacao == 1){
    result = num1 + num2;
    printf("\n Resultado: %lf", result);
}
else if (operacao == 2){
    result = num1 - num2;
    printf("\n Resultado: %lf", result);
}
else if (operacao == 3){
    result = num1 * num2;
    printf("\n Resultado: %lf", result);
}
else if (operacao == 4){
    result = num1 / num2;
    printf("\n Resultado: %lf", result);
}
}
