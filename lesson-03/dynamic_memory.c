#include <stdio.h>
#include <stdlib.h>


//malloc()
int *studentArrayM(int n)
{
    int *ptr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        *(ptr + i) = i+1 ;
    }
    return ptr;
}


//calloc - it take two parameters calloc(n,size)
int *studentArrayC(int n){
    int *ptr = calloc(n,sizeof(int));
    return ptr;
}




int main()
{
    // malloc() = A function in that dynamically allocates a specified number of bytes
    //            in memory
    int n = 10;
    int *ptr = studentArrayM(n); 

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // calloc()
    printf("---------Calloc-----------\n");
    int n2= 5;
    int *ptr2 = studentArrayC(n2);
    for (int i = 0; i < n2; i++)
    {
        printf("%d\n", ptr2[i]);
    }

    // realloc()

    // free() : it is used to deallocate the dynamically allocated memory only not other memort
    free(ptr);
    ptr = NULL;
    ptr2 = NULL; 
    free(ptr2);
    return 0;
}