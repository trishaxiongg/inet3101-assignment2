/* basen.c -- prints integer in base 2–16 form */
#include <stdio.h>

void to_base_n(unsigned long n, unsigned int base);

int main(void)
{
    unsigned int number;
    unsigned int base;

    printf("Enter a decimal number: ");
    if (scanf("%u", &number) != 1)
        return 0;

    printf("Enter a base (2–16): ");
    scanf("%u", &base);

    if (base < 2 || base > 16)
    {
        printf("Error: base must be between 2 and 16.\n");
        return 1;
    }

    if (base == 8)
        printf("0");
    else if (base == 16)
        printf("0x");

    to_base_n(number, base);
    printf("\n");

    return 0;
}

void to_base_n(unsigned long n, unsigned int base)
{
    unsigned int r;
    const char digits[] = "0123456789abcdef";

    r = n % base;
    if (n >= base)
        to_base_n(n / base, base);

    putchar(digits[r]);
}
