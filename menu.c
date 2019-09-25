#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opcheck;
    do {
        printf("*****************************************\n");
        printf("|               Menu                    |\n");
        printf("|                                       |\n");
        printf("| Opcoes                                |\n");
        printf("| 1 - ***********                       |\n");
        printf("| 2 - ***********                       |\n");
        printf("| 3 - ***********                       |\n");
        printf("| 0 - Encerrar Programa                 |\n");
        printf("*****************************************\n");
        fflush(stdin);
        scanf("%d", &opcheck);
        if (opcheck == 1) {


        } else if (opcheck == 2) {

        } else if (opcheck == 3) {

        } else if (opcheck == 4) {

        } else if (opcheck == 5) {

        }
    }while (opcheck != 0);
}