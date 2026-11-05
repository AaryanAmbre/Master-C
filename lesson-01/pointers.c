#include <stdio.h>

int main(){
    int a=100;
    int b=200;
    float c = 25.5;
    char d = 'A';
    printf("Value of A is :%d",a);
    printf("\n");
    printf("Value of B is :%d",b);
    printf("\n");
    printf("Value of A is :%f",c);
    printf("\n");
    printf("Value of A is :%c",d);
    printf("\n");

    // Pointer decalration 
    void *ptr = &a;
    printf("Address of A is %p\n",ptr);
    
    // Printing the Size of Integer 
    printf("Size of my INT is %zu\n",sizeof(a));
    



    //Address-of operator & and assignment through operator
    int number = 100;
    int *ptr2 = &number;
    *ptr2 = 500;
    printf("%d\n", number);




    //---------------- Pointer Arithmatic --------------------------
    int numbers[5] = {10,20,30,40,50};
    int *pt3 = &numbers[0];
    pt3++;
    printf("%d\n",*pt3);
    printf("%d\n",*(pt3 + 2));


    /*
      In pointer comparsion what u are comapring is address of one variable like if 
      both pointers point to same variable or container in memory
    */

    //Pointer lab
    int num1 =100;
    int *ptr4 = &num1;
    printf("Number 1 is : %d\n",num1);
    printf("address of Number 1 is : %p\n",ptr4);
    printf("Pointer value is :%d\n",*ptr4);
    
    *ptr4 = 500;
    printf("After changing ,Number 1 is : %d\n",num1);
    int num2 = 200;
    int *ptr5 = &num2;
    if(ptr5 ==NULL){
        printf("IS null\n");
    }
    else {
        printf("Is not Null\n");
    }

    int int_array[5]={10,20,30,40,50};
    int *aar_ptr = &int_array[0];
    printf("First Element of Array is :%d\n",*aar_ptr);
    printf("Second Element of Array is :%d\n",*(aar_ptr+1));
    printf("third Element of Array is :%d\n",*(aar_ptr+3));
    aar_ptr++;
    printf("New Element of Array is :%d\n",*aar_ptr);
    int *first_element = &int_array[0];
    int *seond_element = &int_array[4];

    int distance = *seond_element - *first_element;
    printf("Distance is :%d\n",distance);
    
    
    //array traversal
    int size = sizeof(int_array)/sizeof(int_array[0]);
    int *start = int_array;
    int *end = int_array+size;

    for (int *curr = start ; curr != end ; ++curr ) {
        printf(" %d",*curr);
    }
    printf("\n");

    // To compile the code we use CMD
    // gcc -Wall -Wextra -pedantic -std=c17 -g filename.c -o output_filename && ./output_filename
    return 0;
}