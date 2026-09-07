#include <stdio.h>
int main() {
    int vector[6];
    int i;
    int pos;
    char cont;
    printf("Ingrese 6 datos para el vector:\n");
    for (i = 0; i < 6; i++) {
        printf("Dato %d: ", i + 1,"\n");
        scanf("%d", &vector[i]);
    }
    do {
        printf("\nIngrese la posicion del dato que quiere consultar (1-6): ");
        scanf("%d", &pos);
        if (pos >= 1 && pos <= 6) {
            printf("El dato en la posicion %d es: %d\n",
                   pos, vector[pos - 1]);
        } else {
            printf("Posicion invalida. Debe ser entre 1 y 6.\n");
        }
        printf("\n¿Desea terminar el programa? (s/n): ");
        scanf(" %c", &cont);
    } while (cont != 's' && cont != 'S');
    printf("\nPrograma terminado.\n");
    return 0;
}
