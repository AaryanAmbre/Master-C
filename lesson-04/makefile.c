#include <stdio.h>
#include "functions.c"
#include "calculation.c"
#include<stdlib.h>
int main()
{
    printf("--------Make File -------\n");
    greeting();
    calculate(50);
    // int *arr = malloc(10 * sizeof(10));
    return 0;
}