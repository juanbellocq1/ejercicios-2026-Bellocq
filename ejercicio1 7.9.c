#include <stdio.h>
int main() {
    int vector[4],i;

    printf("Ingrese 4 valores para el vector:\n");
    for (i = 0; i < 4; i++) {
        printf("Vector[%d]: ", i,"\n");
        scanf("%d", &vector[i]);
    }
    printf("\nValores del vector:\n");

    for (i = 0; i < 4; i++) {
        printf("Vector[%d] = %d\n", i, vector[i]);
    }

    return 0;
}
