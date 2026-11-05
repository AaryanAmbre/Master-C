#include<stdio.h>

void chang_number(int *ptr){
    *ptr=500;  
}

int main(){
    // Modules are 18

    // 1. Pointer to Pointer Module - 1 
    int number = 100;
    int *ptr = &number;
    // pptr stores the address of pointer ptr which has the address of number variable
    int **pptr = &ptr;
    **pptr =500;
    printf("through pptr: %d\n", **pptr);

    // Module 2 
    chang_number(&number);
























    //gcc -Wall -Wextra -pedantic -std=c17 -g advanced_pointer.c -o adv_poin && ./adv_poin
    return 0;
}