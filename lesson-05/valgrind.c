#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("This is to learn valgrind\n");
    int *arr = malloc(1000 * sizeof(int));
    
    free(arr);
    return 0;
    // to compile using cmake 
    // cmake -S . -B build
    // then after above cmd u can run the object file in build dir using ./build/object_file_name.o
    // cmake --build build 
    // ./build/object_file_name.o
}