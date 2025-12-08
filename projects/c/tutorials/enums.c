#include <stdio.h>

// an enum is a special type that represents a group of constants (unchangeable values)
// to create an enum, use the 'enum' keyword, followed by the name of the enum and separate the enum items with a comma
enum Level { LOW, MEDIUM, HIGH };

enum Level1 { FIRST = 25, SECOND = 50, THIRD = 75 };

int main() {
  // to access the enum, create a variable of it
  // after creation a value can be assigned to the variable (must be one of the items inside the enum!)
  enum Level myVar = MEDIUM;

  // by default, the first item (LOW) has the value '0', the second (MEDIUM) has the value '1' etc.
  printf("%d\n", myVar); // (will print 1 because of the second item 'MEDIUM')

  // create a new variable for the additional enum
  enum Level1 newVar = SECOND;

  // now since the items are changed in their value, they will print their new numbers
  printf("%d\n", newVar);

  return 0;
}
