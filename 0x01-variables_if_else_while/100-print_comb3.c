#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * return: 0 (success)
 */

int main(void) {
    for (int i = 0; i <= 8; i++) {
        for (int j = i + 1; j <= 9; j++) {
            putchar(i + '0');
            putchar(j + '0');
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
