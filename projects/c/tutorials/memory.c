#include <stdio.h>
#include <stdlib.h>

// when a basic variable is created, C will automatically reserve space for that variable
// with the 'sizeof' operator the size of different types can be found out

// a created program using too much or unnecessary memory, it can result in slow and poor performance

int myInt;
float myFloat;
double myDouble;
char myChar;

// the process of reserving memory is called allocation
// the way to allocate memory depends on the type of memory
// C has two types, static and dynamic memory

int main() {

  // print the used memory sizes of the different functions
  printf("%zu\n", sizeof(myInt));    // 4 bytes
  printf("%zu\n", sizeof(myFloat));  // 4 bytes
  printf("%zu\n", sizeof(myDouble)); // 8 bytes
  printf("%zu\n", sizeof(myChar));   // 1 byte

  // static memory is reserved before the program runs
  // allocation of static memory is also known as 'compile time' memory allocation
  // (if the semester starts and only 12 students participate, the space of elements is wasted and not used, it can not be changed afterwords)
  int students[20];

  printf("%zu\n", sizeof(students)); // 80 bytes

  // dynamic memory is allocated after the program starts running
  // allocation of dynamic memory can also be referred to as 'runtime' memory allocation
  // dynamic memory does not belong to a variable, it can only be accessed with pointers
  // int *ptr1 = malloc(size); -> ptr1 = malloc(sizeof(*ptr1));
  // int *ptr2 = calloc(amount, size); -> ptr2 = calloc(1, sizeof(*ptr2));

  // the best way to allocate the right amount of memory for a data type is to use the 'sizeof' operator
  // use dynamic memory to improve the 'students' example above
  int *pupils;        // the '*' acts as the pointer (ptr)
  int numPupils = 12; // specifying how many students participate
  pupils = calloc(
      numPupils,
      sizeof(
          *students)); // specifies the amount of items to allocate and the size of each item
  printf("%zu\n", numPupils * sizeof(*students));

  // dynamic memory behaves like an array, with its data type specified by the type of the pointer
  int *ptr;
  ptr = calloc(4, sizeof(*ptr));

  *ptr = 2; // points to the first memory location of 'ptr'
  ptr[1] = 4;
  ptr[2] = 6;
  // 'ptr[3]' is not specified, so a 0 will be printed because of 'calloc' initialising the memory to 0!

  printf("%d\n", *ptr);
  printf("%d %d %d", ptr[1], ptr[2], ptr[3]);

  // continue with c:access memory

  return 0;
}
