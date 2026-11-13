
#include <stdio.h>
#define size 9

typedef struct {
    unsigned char x : 1;
} bit;

const int unset[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void readset(bit a[], int n);
void printset(const bit a[]);
void unionset(const bit a[], const bit b[], bit c[]);
void intersect(const bit a[], const bit b[], bit c[]);
void difference(const bit a[], const bit b[], bit c[]);

int main(void) {
    bit a[size] = {{0}}, b[size] = {{0}}, c[size] = {{0}};
    int n;

    printf("Universal set:{1,2,3,4,5,6,7,8,9}\n\n");

    printf("No.of elements in set A : ");
    if (scanf("%d", &n) != 1) return 1;
    readset(a, n);

    printf("No.of elements in set B : ");
    if (scanf("%d", &n) != 1) return 1;
    readset(b, n);

    printf("\nSet A : ");
    printset(a);

    printf("set B : ");
    printset(b);

    unionset(a, b, c);
    printf("\n\t A U B = ");
    printset(c);

    intersect(a, b, c);
    printf("\n\t A intersect B = ");
    printset(c);

    difference(a, b, c);
    printf("\n\t A - B = ");
    printset(c);

    return 0;
}

void readset(bit a[], int n) {
    int i, k, x;

    if (n < 0 || n > size) {
        printf("invalid size; must be between 0 and %d. \n", size);
        return;
    }

    printf("enter %d elements : ", n);

    for (i = 0; i < n; i++) {
        if (scanf("%d", &x) != 1) return;

        for (k = 0; k < size; k++) {
            if (unset[k] == x) {
                a[k].x = 1;
                break;
            }
        }

        if (k == size)
            printf("%d is not in the universal set, ignored. \n", x);
    }
}

void printset(const bit a[]) {
    int k, first = 1;

    printf("{");

    for (k = 0; k < size; k++) {
        if (a[k].x) {
            printf(first ? "%d" : ",%d", unset[k]);
            first = 0;
        }
    }

    printf("}\n");
}

void unionset(const bit a[], const bit b[], bit c[]) {
    for (int k = 0; k < size; k++)
        c[k].x = a[k].x | b[k].x;
}

void intersect(const bit a[], const bit b[], bit c[]) {
    for (int k = 0; k < size; k++)
        c[k].x = a[k].x & b[k].x;
}

void difference(const bit a[], const bit b[], bit c[]) {
    for (int k = 0; k < size; k++)
        c[k].x = a[k].x && !b[k].x;
}
