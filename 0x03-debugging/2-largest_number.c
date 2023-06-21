#include <stdio.h>
#include "main.h"

int main(void)
{
    int a = 972;
    int b = -98;
    int c = 0;
    int largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return 0;
}
