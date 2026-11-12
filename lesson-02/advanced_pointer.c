
#include <stdio.h>
#include<stdbool.h>
void chang_number(int *ptr)
{
  *ptr = 500;
}

int add(int num1, int num2)
{
  return num1 + num2;
}

int subtract(int num1, int num2)
{
  return num1 - num2;
}

int multiply(int num1, int num2)
{
  return num1 * num2;
}

int calculate(int a, int b, int (*operation3)(int, int))
{
  return operation3(a, b);
}

struct Process
{
  int pid;
  int priority;
};

typedef struct 
{
  char Name[50];
  int age;
  float GPA;
  bool isFullTimeStudent;
}Student;

int main()
{
  // Modules: 18

  // -------------------- Module 1: Pointer to Pointer --------------------

  int number = 100;
  int *ptr = &number;

  // pptr stores the address of pointer ptr,
  // which itself stores the address of number.
  int **pptr = &ptr;

  **pptr = 500;

  printf("Through pptr: %d\n", **pptr);

  // -------------------- Module 2: Passing Pointers to Functions --------------------

  /*
      When we pass arguments without pointers, changes made inside
      the function affect only its local copy of the variable.
  */

  chang_number(&number);

  // -------------------- Module 4: Const and Pointers --------------------

  // 1. Pointer to Constant Data
  // You can change the address stored in the pointer,
  // but you cannot modify the value through this pointer.

  int a = 100;
  int b = 200;

  const int *ptr5 = &a;

  printf("Value of A: %d\n", *ptr5);

  ptr5 = &b;

  printf("Value of B: %d\n", *ptr5);

  // *ptr5 = 300;  // Invalid: cannot modify data through this pointer.

  // 2. Constant Pointer
  // You cannot change the address stored in the pointer,
  // but you can modify the value it points to.

  int *const ptr6 = &a;

  *ptr6 = 500;

  printf("Value of Pointer-6: %d\n", *ptr6);

  // 3. Constant Pointer to Constant Data
  // Neither the pointer address nor the pointed-to value
  // can be modified through this pointer.

  const int *const ptr7 = &a;

  // 4. Ordinary Pointer
  // Both the pointer address and the pointed-to value can be modified.

  int *ptr8 = &a;

  // -------------------- Module 5: Void Pointers --------------------

  /*
      A void pointer is a generic pointer that can store the address
      of an object of any data type.

      However, it cannot be directly dereferenced.
      Convert it to an appropriate object pointer type first.
  */

  int c = 900;

  void *ptr9 = &c;

  // printf("%d", *ptr9);  // Invalid: cannot dereference a void pointer.

  int *con_ptr9 = ptr9;

  printf("%d\n", *con_ptr9);

  // -------------------- Module 6: Function Pointers --------------------

  // Declaration of a function pointer.
  // The same pointer can point to different compatible functions.

  int (*operation)(int, int);

  operation = add;
  printf("Result: %d\n", operation(10, 20));

  operation = subtract;
  printf("Result: %d\n", operation(10, 20));

  operation = multiply;
  printf("Result: %d\n", operation(10, 20));

  // -------------------- Module 7: Array of Function Pointers --------------------

  // An array containing three function pointers.
  // Each function accepts two integers and returns an integer.

  int (*operation2[3])(int, int) = {
      add,
      multiply,
      subtract};

  int result_1 = operation2[0](10, 20);
  int result_2 = operation2[1](10, 20);
  int result_3 = operation2[2](10, 20);

  printf("Result for Addition: %d\n", result_1);
  printf("Result for Multiplication: %d\n", result_2);
  printf("Result for Subtraction: %d\n", result_3);

  // -------------------- Module 8: Callback Functions --------------------

  // See the calculate() function.
  // Passing add as an argument makes it a callback function.

  int result_5 = calculate(10, 20, add);

  printf("Result of Callback Function: %d\n", result_5);

  // -------------------- Module 9: Pointers to Structures --------------------

  struct Process process = {100, 5};

  // The pointer refers to the entire structure object.

  struct Process *sptr = &process;

  sptr->pid = 6969; // Equivalent to (*sptr).pid = 6969;

  // Struct pointers are useful because you can access and modify
  // struct members without copying the entire structure.
  // They are also useful when passing structures to functions.

  //----------Module 10 — Pointer qualifiers: const, volatile, restrict---------------------------
  // volatile int status;

  // Structs
  Student aaryan = {"Aaryan",20,9.8,true};
  Student vedant = {"vedant",20,6.0,false};
  printf("%s\n",aaryan.Name);
  printf("%d\n",aaryan.age);
  printf("%f\n",aaryan.GPA);
  printf("%s\n",aaryan.isFullTimeStudent ? "Yes": "No");
  
  printf("%s\n",vedant.Name);
  printf("%d\n",vedant.age);
  printf("%f\n",vedant.GPA);
  printf("%s\n",vedant.isFullTimeStudent ? "Yes": "No");
  

  // -------------------- Compilation --------------------

  // gcc -Wall -Wextra -pedantic -std=c17 -g advanced_pointer.c -o adv_poin
  // ./adv_poin

  return 0;
}
