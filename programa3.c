#include <stdio.h>
#include <stdlib.h>

main() {

int num;
int count;
int parescount = 0;

for (count = 0; count < 2; count++) {
    printf("\nDigite um numero inteiro:\n");
    scanf("%d", &num);
if (num % 2 == 0) {
    printf("\nO numero digitado foi %d." "\n%d eh um numero par.", num, num);
    parescount++;
}
else{
    printf("\nO numero digitado foi %d." "\n%d eh um numero impar.", num, num);
}
}

if (parescount == 0) {
    printf("\nNenhum dos numeros digitados eh par.");
}
else if (parescount == 1){
    printf("\n1 (Hum) numero digitado eh par.");
}
else {
    printf("\n2 (Dois) numeros digitados sao pares.");
}

}
