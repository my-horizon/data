#include <stdio.h>

// use enums when values will not change for sure!

// an enum is a special type that represents a group of constants (unchangeable values)
// to create an enum, use the 'enum' keyword, followed by the name of the enum and separate the enum items with a comma
enum Level { LOW, MEDIUM, HIGH };

// to make more sense of the values, they can be changed easily
enum Level1 { FIRST = 25, SECOND = 50, THIRD = 75 };

// if a value is assigned to one specific item, the following items will update their numbers
enum Level2 { UNO = 30, DUE, TRES };

// enums are often used in switch statements to check for corresponding values
enum Level3 { UNTEN = 1, MITTE, OBEN };

// typedef works great with enum, this makes it easier to declare variables of the enum type, without having to write 'enum' every time
typedef enum { MON, TUE, WED, THU, FRI, SAT, SUN } Day;

int main() {
  // to access the enum, create a variable of it
  // after creation a value can be assigned to the variable (must be one of the items inside the enum!)
  enum Level myVar = MEDIUM;

  // by default, the first item (LOW) has the value '0', the second (MEDIUM) has the value '1' etc.
  printf(
      "%d\n",
      myVar); // by default, the first item (LOW) has the value '0', the second (MEDIUM) has the value '1' etc.
              // (will print 1 because of the second item 'MEDIUM')

  // create a new variable for the additional enum
  enum Level1 newVar = SECOND;

  printf("%d\n",
         newVar); // changed values in the items will print their new numbers

  // create a new variable for the 'Level2' enum
  enum Level2 anoVar = DUE;

  printf(
      "%d\n",
      anoVar); // (will show '31' since it updates it's value according to previous item)

  // create a new variable for the 'Level3' enum
  enum Level3 theVAR = MITTE;

  switch (
      theVAR) { // the different levels are printed depending on the variables ('theVAR') value ("MITTE")!
  case 1:
    printf("Low Level\n");
    break;
  case 2:
    printf("Medium Level\n");
    break;
  case 3:
    printf("High Level\n");
    break;
  };

  // the 'typedef' version shortens the code
  Day today = WED;
  if (today == WED) {
    printf("It is Wednesday!\n");
  }

  return 0;
}
