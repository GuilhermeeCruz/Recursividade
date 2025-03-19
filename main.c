#include <stdio.h>
#include <string.h>

1.
int fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fatorial(n - 1);
}

2.
int somaNaturais(int n) {
    if (n == 0) return 0;
    return n + somaNaturais(n - 1);
}

3.
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

4.
int potencia(int x, int n) {
    if (n == 0) return 1;
    int temp = potencia(x, n / 2);
    if (n % 2 == 0) return temp * temp;
    return x * temp * temp;
}

5.
void contagemRegressiva(int n) {
    if (n < 0) return;
    printf("%d ", n);
    contagemRegressiva(n - 1);
}

6.
int somaDigitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + somaDigitos(n / 10);
}

7.
void inverterString(char *str, int inicio, int fim) {
    if (inicio >= fim) return;
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverterString(str, inicio + 1, fim - 1);
}
