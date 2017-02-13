/*
 * p123, programming project 07
 * rearrange squaree.c
 */

#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares. \n");
    printf("Enter nubmer of entries in table: ");
    scanf("%d", &n);

    for (i = 1, square = 1, odd = 3; i <= n; i++, odd += 2) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}