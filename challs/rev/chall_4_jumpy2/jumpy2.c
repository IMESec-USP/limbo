#include <stdio.h>

void win() {
    printf("Parabéns! você conseguiu!\n");
}

void chall() {
    char buffer[32];
    printf("Você consegue pular pra função win?\n");
    gets(buffer);
}

int main() {
    chall();
    return 0;
}
