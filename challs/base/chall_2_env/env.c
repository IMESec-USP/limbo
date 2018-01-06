#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {
    if(argc == 4) {

        if(strcmp(argv[2], argv[3]) == 0) {
        
            char *var = getenv("IMESEC");
            if(var != NULL && strcmp(var, "chall_3_env") == 0) {
                printf("PASSOU! Parabéns!\n");
            }
            else
                printf("Falta só uma coisinha...\nvar = %s\n", var);
        }
        else
            printf("argv[2] e argv[3] diferem!\n");
    }
    else
        printf("Contagem errada de argumentos.\n");
    return 0;
}

