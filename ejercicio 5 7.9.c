#include <stdio.h>
#define VEC 10
void ordenar(int vector[]) {
    int n, m, aux;
    for (n = 0; n < VEC - 1; n++) {
        for (m = n + 1; m < VEC; m++) {
            if (vector[n] < vector[m]) {
                aux = vector[n];
                vector[n] = vector[m];
                vector[m] = aux;
            }
        }
    }
}
float promedio(int vector[]) {
    int n, sum = 0;
    for (n = 0; n < VEC; n++) {
        sum = sum + vector[n];
    }
    return (float)sum / VEC;
}
int main() {
    int vector[VEC];
    int n;
    float prom;
    printf("Ingrese 10 valores:\n");
    for (n = 0; n < VEC; n++) {
        printf("Valor %d: ", n + 1);
        scanf("%d", &vector[n]);
    }
    ordenar(vector);
    printf("\nValores ordenados de mayor a menor:\n");
    for (n = 0; n < VEC; n++) {
        printf("%d ", vector[n]);
    }
    prom = promedio(vector);
    printf("\n\nPromedio de los valores: %f\n", prom);
    return 0;
}
