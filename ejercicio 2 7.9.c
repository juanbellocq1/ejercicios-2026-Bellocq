#include <stdio.h>
int main() {
    int vector[4];
    int suma = 0;
    float prom;
    for (int i = 0; i < 4; i++) {
        printf("Ingrese el valor %d: ", i + 1,"\n");
        scanf("%d", &vector[i]);
    }
    for (int i = 0; i < 4; i++) {
        suma = suma + vector[i];
    }
    prom = (float)suma / 4;
    printf("Valores del vector:\n");
    for (int i = 0; i < 4; i++) {
        printf("valor %d: %d\n", i + 1, vector[i]);
    }
    printf("Suma: %d\n", suma);
    printf("Promedio: %f\n", prom);

    return 0;
}
