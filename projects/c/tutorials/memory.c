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
  printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);

  // dynamic memory does not have its own data type, the data in the memory can be interpreted as a type based on the data type of the pointer
  // a pointer to 4 bytes can be interpreted as one 'int' value (4 bytes) or as an array of 4 'char' values (1 byte each)
  int *ptr3 = malloc(4);
  char *ptr4 = (char *)ptr3;
  ptr3[0] = 1684234849;

  printf("%d is %c %c %c %c\n", *ptr3, ptr4[0], ptr4[1], ptr4[2], ptr4[3]);

  // if the reserved amount of memory is not enough, it can be reallocated to make it larger
  // reallocation reserves a different (usually larger) amount of memory while keeping the data that was stored in it
  // use the 'realloc()' function to change the size
  // int *ptrN = realloc(ptr1, size);
  int *ptr01, *ptr02, size;

  size = 4 * sizeof(*ptr01); // allocate memory for 4 integers
  ptr01 = malloc(size);

  printf("%d bytes allocated at address %p\n", size, ptr01);

  size = 6 * sizeof(*ptr01); // resize the memory to hold 6 integers
  ptr02 = realloc(ptr01, size);

  printf("%d bytes reallocated at address %p\n", size, ptr02);

  // the 'realloc()' function returns a 'NULL' pointer if it is not able to allocate more memory
  // this example checks whether 'realloc()' is able to resize the memory or not, by checking for a 'NULL' pointer
  int *ptr03, *ptr04;

  ptr03 = malloc(4); // allocate memory

  ptr04 = realloc(ptr03, 8); // attempt to resize the memory

  // check whether realloc is able to resize or not
  // error checking should always be included when when allocating memory
  if (ptr04 == NULL) {
    printf("Failed. Unable to resize memory!\n");
  } else {
    printf("Success. 8 bytes reallocated at address %p!\n", ptr04);
  }

  // the memory should always be "freed"/released after usage (important to make sure program is behaving as expected)
  free(ptr03);

  return 0;
}

// continue with c:deallocate memory
