#include <stdio.h>
int main() {
    int matriz[2][4][3];
    int i, j;
    matriz[0][0][0] = 0;
    matriz[0][0][1] = 0;
    matriz[0][0][2] = 0;
    matriz[0][1][0] = 0;
    matriz[0][1][1] = 1;
    matriz[0][1][2] = 0;
    matriz[0][2][0] = 1;
    matriz[0][2][1] = 0;
    matriz[0][2][2] = 0;
    matriz[0][3][0] = 1;
    matriz[0][3][1] = 1;
    matriz[0][3][2] = 1;
    matriz[1][0][0] = 0;
    matriz[1][0][1] = 0;
    matriz[1][0][2] = 0;
    matriz[1][1][0] = 0;
    matriz[1][1][1] = 1;
    matriz[1][1][2] = 1;
    matriz[1][2][0] = 1;
    matriz[1][2][1] = 0;
    matriz[1][2][2] = 1;
    matriz[1][3][0] = 1;
    matriz[1][3][1] = 1;
    matriz[1][3][2] = 1;
    printf("TABLA DE VERDAD AND\n");
    printf(" A  B  Salida\n");
    for (j = 0; j < 4; j++) {
        printf(" %d  %d  %d\n",
               matriz[0][j][0],
               matriz[0][j][1],
               matriz[0][j][2]);
    }
    printf("\nTABLA DE VERDAD OR\n");
    printf(" A  B  Salida\n");
    for (j = 0; j < 4; j++) {
        printf(" %d  %d  %d\n",
               matriz[1][j][0],
               matriz[1][j][1],
               matriz[1][j][2]);
    }
    return 0;
}
