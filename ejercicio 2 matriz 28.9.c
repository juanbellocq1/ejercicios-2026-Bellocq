#include <stdio.h>
int main() {
    int matriz[3][2][2];
    int i, j, k;
    printf("Ingrese los datos de la matriz 3x2x2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("Ingrese el dato [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }
    printf("\nDatos de la matriz:\n");
    for (i = 0; i < 3; i++) {
        printf("\nBloque %d:\n", i + 1);
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d\t", matriz[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
