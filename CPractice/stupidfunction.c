#include <stdio.h>

int main() {

    char *c = 'c';

    char x = 'c';

    int m = contains(*c, x);

    printf("%d", m);

    return 0;
}

int increment(int *x) {
    return *x +=1;
}

int contains(char * str, char c) {

    if (*str != '\0') {
        return 1;
    } else {
        return 0;
    }
}