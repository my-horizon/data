#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// using dynamic memory with structures is useful if the amount of structs is not clear yet or to save memory
// use the 'malloc()' function to allocate memory for a struct pointer
struct Car {
  char brand[50];
  int year;
};

// allocating memory for multiple structs (like an array) is also possible
struct Phone {
  char brand[50];
  int year;
};

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

  // if a block of memory is no longer needed it should be deallocated
  // deallocation is also referred to as "freeing" the memory
  // after deallocation the memory block can be used by other programs or even within the current program again
  free(ptr03);
  ptr03 = NULL; // considered as good practice to prevent from accidental usage

  // a working example including error checking and freeing
  int *ptr09;
  ptr09 = malloc(sizeof(*ptr09)); // allocate memory for one integer

  // if memory cannot be allocated, print a message and end the 'main()' function
  if (ptr09 == NULL) {
    printf("Unable to allocate memory\n");
    return 1; // exit the program with an error code
  }

  *ptr09 = 20; // set the value of the integer

  printf("Integer value: %d\n", *ptr09); // print the integer value

  free(ptr09);  // free allocated memory
  ptr09 = NULL; // set pointer to NULL to prevent from accidental usage

  // allocate memory for one 'Car' struct
  struct Car *ptr07 = (struct Car *)malloc(sizeof(struct Car));

  // check if allocation was successful
  if (ptr07 == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // set values
  strcpy(ptr07->brand, "Honda");
  ptr07->year = 2022;

  // print values
  printf("Brand: %s\n", ptr07->brand);
  printf("Year: %d\n", ptr07->year);

  // free the memory
  free(ptr07);

  // allocate memory for one 'Phone' struct with multiple items
  struct Phone *phones = (struct Phone *)malloc(3 * sizeof(struct Phone));

  return 0;
}

// continue with c:structs and memory
