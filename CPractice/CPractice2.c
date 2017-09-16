#include <stdio.h>
#include <string.h>

int main() {
    int ii, *ptr, arr[3] = {2, 4, 6};
    char *s, str1[] = "java";

    /* 1A */
    printf("1A) str1: size=%d string=%s\n\n", sizeof(str1), str1);

    /* 1B - print str1 character by character (with ASCII value) */
    for (ii = 0; ii < 6; ii++)
        printf("1B) str1[%d]='%c' (%d)\n", ii, str1[ii], str1[ii]);
    printf("\n");

    /* 1C */
    s = str1;
    while (*s != '\0') {
        printf("1C) s=%p  *s=%c\n", s, *s);
        s++;
    }
    printf ("\n");

    /* 1D */
    ptr = arr;
    for (ii=0;ii<3;ii++) {
        printf("1D) ptr=%p  *ptr=%d\n", (void *) ptr, *ptr);
        ptr++;
    }

/*
    char strk[] = "olkjasdijasd";

    printf("%d\n", sizeof(strk) / sizeof(strk[0]));

    printf("String = \"%s\" SizeOf = %d\n", strk, sizeof(strk));
    */
    return 0;
}


