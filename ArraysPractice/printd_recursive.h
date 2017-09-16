#ifndef C_PRINTD_RECURSIVE_H
#define C_PRINTD_RECURSIVE_H

#endif

void printd(int n) {

    if (n<0) {
        putchar('-');
        n = -n;
    }
    if (n/10)
        printd(n / 10);
    putchar(n % 10 + '0');

    return;
}

int max(int a, int b) {
    return ((a) > (b) ? (a) : (b));
}
