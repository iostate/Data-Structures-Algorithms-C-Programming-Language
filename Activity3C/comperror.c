
int main() {

    int i = 33, *j = &i, **k = &j;
    *j = 17;
    printf("i = %d *j = %d **k = %d\n", i, *j, *(*k));
    **k = 95;

    printf("i = %d *j = %d **k = %d", i, *j, *(*k));

    return 0;
}
