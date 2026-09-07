#include <stdio.h>
void comp(int vector1[], int vector2[], int tam) {
    int i;

    for (i = 0; i < tam; i++) {
        if (vector1[i] > vector2[i]) {
            printf("Posicion %d: El mayor es %d y pertenece al Vector 1\n",
                   i, vector1[i]);
        }
        else if (vector2[i] > vector1[i]) {
            printf("Posicion %d: El mayor es %d y pertenece al Vector 2\n",
                   i, vector2[i]);
        }
        else {
            printf("Posicion %d: Los valores son iguales (%d)\n",
                   i, vector1[i]);
        }
    }
}
int main() {
    int vector1[5];
    int vector2[5];
    int i;
    printf("Ingrese los valores del Vector 1:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vector1[i], "\n");
    }
    printf("\nIngrese los valores del Vector 2:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vector2[i], "\n");
    }
    printf("\nComparacion\n");
    comp(vector1, vector2, 5);
    return 0;
}
