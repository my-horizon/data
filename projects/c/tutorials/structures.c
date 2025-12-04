// structures are a way to group several related variables into one place
// each variable in the structure is known as a member of the structure
// unlike an array, a structure can contain many different data types (int, float, char, etc.)

#include <stdio.h>
#include <string.h>

// create a structure by using the 'struct' keyword, declare every item inside curly braces
struct myStructure { // structure declaration
  int myNum;         //member (int variable)
  char myLetter;     //member (char variable)
  char myString[50]; //member (string variable)
}; // end structure with semicolon

// real life example (useful when storing different information)
struct Car {
  char brand[30];
  char model[30];
  int year;
};

// a structure can also contain another structure as a member, this is called a nested structure
struct Owner {
  char firstName[30];
  char lastName[30];
};

struct Motorcycle {
  char brand[30];
  int year;
  struct Owner owner; // nested structure
};

int main() {

  // to access the structure create a variable of it in the 'main()' function
  struct myStructure s1; // create struct variable with name "s1"

  struct myStructure s2; // more struct variables can be created easily

  struct myStructure s4; // for obtaining the value of 's2' structure

  s4 = s2; // copy the value of 's2' to 's4'

  // to access members of a structure use the dot syntax '.'
  s1.myNum = 13;
  s1.myLetter = 'B';

  // access more struct members
  s2.myNum = 41;
  s2.myLetter = 'Y';

  //remember that in C strings are actually an array of characters (chars) and a value can't be assigned to an array like in the upper method
  // with the 'strcpy()' function a value can be assigned
  strcpy(s1.myString, "Some text for the string");

  //print the values
  printf("My Number: %d\n", s1.myNum);
  printf("My Letter: %c\n", s1.myLetter);
  printf("My string is: %s\n", s1.myString);

  // values can also be assigned to members of a structure variable at declaration time
  // members of a structure do not need to be accessed to assign values to the structure
  struct myStructure s3 = {56, 'Z', "Some text assigned"};

  // if a value has to be changed, use the dot syntax '.', the last change will be applied
  s3.myNum = 25;
  s3.myLetter = 'F';
  strcpy(s3.myString, "Change assigned text");

  // print the values
  printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myString);

  // modifying values is extremely useful when copying structure values (like s4!)
  s4.myNum = 87;
  s4.myLetter = 'X';
  strcpy(s4.myString, "Change the copied values from s2 to s4!");

  printf("%d %c %s\n", s4.myNum, s4.myLetter, s4.myString);

  // real life example of storing different information about cars
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  //print the values
  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  // declare the 'firstName' and 'lastName' variables
  struct Owner person = {"John", "Doe"};
  struct Motorcycle bike1 = {"KTM", 2014, person};

  //print the nested structure
  printf("Bike: %s (%d)\n", bike1.brand, bike1.year);
  printf("Owner: %s %s\n", bike1.owner.firstName, bike1.owner.lastName);

  // continue with c:nested structures

  return 0;
}
