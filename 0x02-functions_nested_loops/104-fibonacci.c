#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: Nothing!
  */
int main(void)
{
	int i;
    unsigned long int a = 1, b = 2, c;

    printf("%lu, %lu", a, b);

    for (i = 0; i < 96; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}

