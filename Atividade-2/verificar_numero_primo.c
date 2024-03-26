#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificar_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);

    if (verificar_primo(numero)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}


bool verificar_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);

    if (verificar_primo(numero)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
