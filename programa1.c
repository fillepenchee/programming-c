#include <stdio.h>

int main() {

int a = 34, b = 55, contador = 1, fib = 0;

while (contador < 11)
    {
fib = a + b;
printf("%d\n", fib);
a = b;
b = fib;
contador++;
    }

}
