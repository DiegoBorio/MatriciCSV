// diego borio
/*Creare un menù con 3 opzioni sulle matrici.
1) generare una matrice casuale di dimensioni nxn data in input
2) salva su csv la matrice, una riga dell'array per ogni riga del file, con le
colonne separate dalla virgola 3) carica dal csv la matrice e la stampa a video
Consegna su github con il link del vostro repository.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
  int n, num, m[n][n], i, j;

  FILE *fp;

  do {
    printf("\nInserire 1 se si desidera carica la matrice quadrata, 2 se si "
           "desidera salvare la matrice su un file CSV e 3 se si desidera "
           "salvare la matrice del file CSV a video:\t");
    scanf("%d", &n);

    switch (n) {
    case 1:

      srand(time(NULL));

      printf("\nInserire la dimensione della radice quadrata:\t");
      scanf("%d", &num);

      for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
          m[i][j] = (rand() % 100) + 1;
        }
      }

      break;

    case 2:

      fp = fopen("matrice.csv", "w");

      for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
          fprintf(fp, "\n%d", m[i][j]);
        }
      }

      fclose(fp);
      break;

    case 3:
      for (i = 0; i < num; i++) {
        printf("\n\n");

        for (j = 0; j < num; j++) {
          printf("\t%d", m[i][j]);
        }
      }
      break;
    }
  } while (n < 3);
}