#include <math.h> //The math.h header file is needed to perform mathematical tasks on numbers
#include <stdio.h>
#include <stdlib.h>

// To create (often referred to as declare) an own function, specify the name of
// the function, followed by parentheses '()' and curly brackets '{}' The void
// function does not have a return value, inside the function (the body) code
// defines what the function will do

void myFunction() { printf("The void function just got called/executed!\n"); }

void newFunction() { printf("Print the same function multiple times!\n"); }

// Almost everything can be put inside a function. Its purpose is to store the
// code and execute it when needed (called).

void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d\n", sum);
}

/*Information can be passed to functions as a parameter. Parameters act as
 * variables inside the function. They are specified after the function name,
 * inside the parantheses.*/

void printNames(char name[]) { printf("Hello %s\n", name); }

// Inside the function, as many parameters as needed can be added

void nameAndAge(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

// Using more parameters to calculate sums the program becomes more sustainable

void calculateSums(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

// Arrays can be passed to a function too

void myArray(int arrayNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", arrayNumbers[i]);
  }
}

/*The 'void' keyword indicates that the function should not return a value.
 * If a returned value is needed, use data types (such as 'int' or 'float')
 * instead of 'void' and use the 'return' keyword inside the function*/

int returnFunction(int x) { return 5 + x; }

// Another example with two parameters

int newReturnFunction(int x, int y) { return x + y; }

// The result of a function can also be stored in a variable (in main function!)

int anotherFunction(int x, int y) { return x + y; }

// Storing the results in different variables makes the program more flexible
// and easier to control

int calculateMoreSums(int x, int y) { return x + y; }

// With more "result variables" it is better to store the results in an array

int arraySums(int x, int y) { return x + y; }

/*Variables in C are only accessible inside the region they are created. This is
 * called "scope". A variable created inside a function belongs to the local
 * scope of that function, and can only be used inside that function.*/

void myFunction1() {
  int x = 5;         // Local variable that belongs to "myFunction1"
  printf("%d\n", x); // Print the variable x.
} // If this would have been moved to 'int main()', an error would occur!

/*A global variable created outside of a function, is called a "global variable"
 * and belongs to the global scope. They are available from within any scope,
 * global and local. A variable created outside of a function is global and can
 * therefore be used by anyone.*/

int x = 31; // With creating an own function, the variable 'x' could also have
            // been used here outside the 'main()' function!

/*If using the same variable name inside and outside of a function, they will be
 * treated as two separate variables. One available in the global scope (outside
 * the function) and one available in the local scope (inside the function).
 * Using the same variable name for both globally and locally variables should
 * be avoided as it can lead to errors and confusion!*/

int y = 16; // Global variable

void myFunction2() {
  int y = 22; // Local variable
  printf("%d\n", y);
}

/*A function consists of two parts: The declaration (function name, return type,
 * parameters) and definition (body of the function -> to be executed). For code
 * optimization, it is recommended to separate the declaration and the
 * definition. This means to declare functions above 'main()' and to define
 * functions below 'main()'. That will make the code better organized and easier
 * to read.*/

void mySeparateFunction();

/*The same "rule" goes for the parameters. It is considered good practice to
 * declare the function above the 'main()' function, then to call the function
 * inside the 'main()' function and to define it below its end.*/

int myFunction3(int x, int y);

// As long as functions are declared first, it is also possible to use functions
// to call other functions

void myFunction4();
void myFunction5();

// Square root function

void myFunction6();

// Round a number function

void myFunction7();

// To the power of function

void myFunction8();

/*sometimes an inline function() is used, it's a small function that asks the
 * compiler to insert code directly where it's called, instead of jumping to
 * it*/

// void inline add(int a, int b); -> not working at the moment!

// with the recursion a function is able to call itself, with that complicated
// problems can be broken down into simple problems, so they're easier to solve

int sum(int k);

// use recursion to count down from 5
void countdown(int n);

// use recursion to calculate the factorial of 5 (multiplying it with every
// number below)
int factorial(int n);

/*a function pointer is like a normal pointer, but instead to a variable it
points to a function
 * it stores the address of a function, allowing to call that function using the
pointer*/
int add(int a, int b) { return a + b; }

/*function pointers can be passed to other functions - this is called a callback
 * it allows a function to call another function that is provided as input*/
void greetMorning() { printf("Good morning!\n"); }
void greetEvening() { printf("Good evening!\n"); }

void greet(void (*func)()) { func(); }

// several function pointers can be stored in an array, you can choose which
// function to run while the program is running
void addition() { printf("Add\n"); }
void subtraction() { printf("Subtract\n"); }
void multiplication() { printf("Multiply\n"); }

// practical example of a simple calculator using function pointers
void add0(int a, int b) { printf("Result: %d\n", a + b); }
void subtract0(int a, int b) { printf("Result: %d\n", a - b); }
void multiply0(int a, int b) { printf("Result: %d\n", a * b); }

// a callback function is a function that is passed as an argument to another
// function the receiving function can then call it back (run it) whenever it
// needs to this is a powerful way to make the code flexible and reusable
void sayHello() {
  printf(
      "Hello from the callback!\n"); // normal function that prints the message
}

void runCallback(void (
    *callback)()) { // runCallback() receives function pointer as parameter
  printf("Before calling the callback...\n");
  callback();
  printf("After calling the callback.\n");
}

// functions that take parameters can be passed - the function pointer type just
// has to match
void addNumbers(int a, int b) { printf("The sum is: %d\n", a + b); }

void calculate(void (*callback)(int, int), int x, int y) { callback(x, y); }

// callbacks can be used to let a function behave differently depending on which
// function is passed in
void greetMorning1() { printf("Good morning!\n"); }
void greetEvening1() { printf("Good evening!\n"); }

void greet1(void (*callback)()) { callback(); }

// real world example using callbacks in qsort()
int compare(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
} // compare() is the callback function!

//  The 'main()' function is used to execute code. It acts like an "entry" for
//  the program and can only be used once!
int main() {

  // Declared functions are not executed immediately. They will be executed when
  // they are called.
  myFunction();

  // A function can be called multiple times too
  newFunction();
  newFunction();
  newFunction();

  // Call the function that was created to calculate the sum of two numbers
  calculateSum();

  /*Call the function that was created to print the following names.
   * Note!: When a parameter is passed to the function, it is called an argument
   * (name = parameter, 'Liam' = argument).*/
  printNames("Liam");
  printNames("Jenny");
  printNames("Anja");

  // Call the 'nameAndAge' function
  nameAndAge("Liam", 3);
  nameAndAge("Jenny", 14);
  nameAndAge("Anja", 30);

  /*Call the 'calculateSums' function.
   * Note!: When working with multiple parameters, the function call must have
   * the same number of arguments as there are parameters. The arguments must be
   * passed in the same order.*/
  calculateSums(5, 3);
  calculateSums(8, 2);
  calculateSums(15, 15);

  // Call the 'myArray' function
  int arrayNumbers[5] = {10, 20, 30, 40, 50};
  myArray(arrayNumbers);

  // Call the 'returnFunction' function
  printf("Result is: %d\n",
         returnFunction(
             3)); // With 'returnFunction(3)' the variable 'x' is set to '3'!

  // Call the 'newReturnFunction' function
  printf("Result is: %d\n", newReturnFunction(5, 2));

  // Call the 'newFunction' function
  int result = anotherFunction(4, 5); // With 'anotherFunction' both variables
                                      // 'x' and 'y' are assigned to a number!
  printf("Result is: %d\n", result);

  // Call the 'calculateMoreSums' function
  int result1 = calculateMoreSums(1, 2);
  int result2 = calculateMoreSums(3, 9);
  int result3 = calculateMoreSums(15, 15);

  printf("Result 1 is: %d\n", result1);
  printf("Result 2 is: %d\n", result2);
  printf("Result 3 is: %d\n", result3);

  // Create an array for the results and call the 'arraySums' function
  int resultArr[5];

  resultArr[0] = arraySums(4, 8);
  resultArr[1] = arraySums(9, 12);
  resultArr[2] = arraySums(10, 11);
  resultArr[3] = arraySums(31, 92);
  resultArr[4] = arraySums(73, 34);

  for (int i = 0; i < 5; i++) {
    printf("Result %d is = %d\n", i + 1, resultArr[i]);
  }

  // Call the 'myFunction1' function
  myFunction1();

  // Print the variable 'x' from global scope
  printf("%d\n", x);

  // Call the 'myFunction2' function and print the variable 'y' from local scope
  myFunction2();
  printf("%d\n", y);

  // Call the separated 'mySeparatedFunction' function and define it below the
  // 'main()' functions ending
  mySeparateFunction();

  // Call the separated 'myFunction3' function and define it below the 'main()'
  // functions ending
  int newResult = myFunction3(7, 6);
  printf("Result is: %d\n", newResult);

  // Call the first declared function 'myFunction4'
  myFunction4();

  // Call the first declared function 'myFunction6'
  myFunction6();

  // Call the first declared function 'myFunction7'
  myFunction7();

  // Call the first declared function 'myFunction8'
  myFunction8();

  // call the inline function
  // printf("%d\n", add(5, 3)); -> not working!

  // call the sum function
  int resultx = sum(10);
  printf("%d\n", result);

  // call the countdown function
  countdown(7);

  // call the factorial function
  printf("Factorial of 5 is %d.\n", factorial(5));

  // call the pointer function
  int (*ptr)(int, int) = add;  // ptr is a pointer to the function add()
  int resultPoint = ptr(5, 3); // ptr(5, 3) calls the function using the pointer
  printf("Result: %d\n", resultPoint);

  // call the greet function - the two greetMorning/Evening functions are passed
  // to it
  greet(greetMorning); // greet() takes another function as a parameter and
                       // calls it
  greet(greetEvening); // usually used in event-driven programs or libraries
                       // needing user-provided callback functions

  // call the function of the pointer arrays
  void (*operations[3])() = {addition, subtraction, multiplication};
  for (int v = 0; v < 3;
       v++) { // starts from 0 (addition = 0) and counts up until 2 (multi = 2)
    operations[v]();
  }

  // call the simple calculator function
  int choice, x = 10, y = 5;

  void (*operations0[3])(int, int) = {
      add0, subtract0, multiply0}; // all 3 functions stored in array

  printf("x = %d, y = %d\n", x, y);
  printf("Choose an operation:\n");
  printf("0: Add\n1: Subtract\n2: Multiply\n");
  scanf("%d", &choice); // user picks which function to run

  if (choice >= 0 && choice < 3) { // correct function is then called
    operations0[choice](x, y);
  } else {
    printf("Invalid choice!\n"); // if an invalid choice is typed in
  }

  // call the callback function
  runCallback(
      sayHello); // when runCallback() runs, it calls sayHello() inside itself

  // call the callback function with passed parameters
  calculate(addNumbers, 4, 9);

  // call the multiple callback function
  greet(greetMorning1);
  greet(greetEvening1); // depending on which function is passed, the program
                        // produces different output
  //
  // call the real world example function (using the callbacks in qsort()!)
  int numbers[] = {5, 2, 9, 1, 7};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  qsort(numbers, size, sizeof(int),
        compare); // qsort() using the compare() callback function

  for (int f = 0; f < size; f++) {
    printf("%d ", numbers[f]);
  }

  return 0;
}

void mySeparateFunction() {
  printf("I am a separated function with the declaration above the 'main()' "
         "function,\n"
         "the call inside the 'main()' function and the definition\n"
         "below the 'main()' functions end.\n");
}

int myFunction3(int x, int y) { return x + y; }

void myFunction4() {
  printf("Some text in myFunction4\n");
  myFunction5();
}

void myFunction5() { printf("Hey! Some more text in myFunction5\n"); }

void myFunction6() {
  printf("%f\n", sqrt(16)); // sqrt(x) is used to calculate the squareroot
}

void myFunction7() {
  printf("%f\n", ceil(1.4));  // ceil() rounds a number upwards to it's neirest
  printf("%f\n", floor(1.4)); // integer while floor() rounds a number down
}
void myFunction8() { printf("%f\n", pow(4, 3)); }

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

void countdown(int n) {
  if (n > 0) {
    printf("%d\n", n);
    countdown(n - 1);
  }
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}
