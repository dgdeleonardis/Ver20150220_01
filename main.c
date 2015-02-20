#include <stdio.h>
#include <stdlib.h>
const int DIM = 5;
int main(int argc, char** argv) {
    int i, mag = 0;
    int vettore[DIM];
    printf("Inserisci l'eta' di %d persone\n", DIM);
    for (i = 0; i < DIM; i++) {
        printf("Inserisci l'eta' della %da persona : ", i + 1);
        scanf("%d", &(vettore[i]));
    }
    for (i = 0; i < DIM; i++) {
        if (vettore[i] > 17) {
            mag++;
        }
    }
    printf("I maggiorenni sono : %d", mag);
    return (EXIT_SUCCESS);
}

