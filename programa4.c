#include <stdio.h>

int main() {

int linha, coluna;
double matriz1[3][3], matriz2[3][3];

//recebe valores da primeira matriz (input do usuário):
for (linha = 0; linha < 3; linha++)
{
    for (coluna = 0; coluna < 3; coluna++) {
        printf("\nDigite o numero para inserir na linha %d, coluna %d da matriz: ", linha+1, coluna+1);
        scanf("%lf", &matriz1[linha][coluna]);
}
}

//apresenta a primeira matriz:
printf("\n Aqui estah sua matriz original: \n");
for (linha = 0; linha < 3; linha++)
{
    for (coluna = 0; coluna < 3; coluna++) {
        printf("%lf", matriz1[linha][coluna]);
        printf("\n");
}
}

//multiplica matriz 1 por 5:
for (linha = 0; linha < 3; linha++)
{
    for (coluna = 0; coluna < 3; coluna++) {
        (matriz2[linha][coluna] = (matriz1[linha][coluna]*5));
}
}

//apresenta a segunda matriz, que eh a primeira multiplicada por 5:
printf("\n Aqui estah sua matriz multiplicada por 5: \n");
for (linha = 0; linha < 3; linha++)
{
    for (coluna = 0; coluna < 3; coluna++) {
        printf("%lf", matriz2[linha][coluna]);
        printf("\n");
}
}

}
