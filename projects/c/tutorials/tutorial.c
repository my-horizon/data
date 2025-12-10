#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  // This is a test-line for a comment!
  printf("Hello World!\n");
  printf("Have a nice day!\n\n");
  printf("I am learning C!\n");

  int myNum = 7;
  // myNum = 7 would overwrite the old value!
  float myFloatNum = 5.99;
  char myLetter = 'X';
  printf("My favorite number is: %d\n\n", myNum);
  printf("My favorite number is %d and my favorite Letter is %c.\n", myNum,
         myLetter);
  printf("%f\n", myFloatNum);
  printf("%c\n\n", myLetter);

  int myNextNum = 9;
  int myOtherNum = 10;

  // The equal sign assigns (=zuweisen) the value of myOtherNum to myNextNum.
  myOtherNum = myNextNum;

  // myNextNum is now 10 instead of 9!
  printf("%d\n\n", myNextNum);

  char myNextLetter = 'A';
  char myOtherLetter;

  // The equal sign assigns the letter A from myNextLetter to myOtherLetter!
  myOtherLetter = myNextLetter;

  // myOtherLetter now also is A (even though there is no value assigned!).
  printf("%c\n\n", myOtherLetter);

  printf("Another way of showing a text with a random number: %d\n\n", 15);

  int x = 5;
  int y = 6;
  // The '+' operator adds two variables to each other and the sum will be
  // printed!
  int sum = x + y;

  printf("%d\n\n", sum);

  /*Multiple variables can be separated with a comma in one line!
  Careful: You can't use two sums, each variable (called identifiers!) need a
  unique name!*/
  int a = 5, b = 6, c = 41;

  // This is another way of adding numbers in equations!
  printf("%d\n\n", a + b + c);

  // The same value can be assigned to multiple variables:
  int d, e, f;
  d = e = f = 13;

  printf("%d\n\n", d + e + f);

  int minutesPerHour = 60;

  printf("One hour contains %d minutes!\n\n", minutesPerHour);

  // Practical example for Student data:
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.99;
  char studentGrade = 'B';

  // Print the practical example:
  printf("Student-ID: %d\n", studentID);
  printf("Student Age: %d\n", studentAge);
  printf("Student Fee: %f\n", studentFee);
  printf("Student Grade: %c\n\n", studentGrade);

  // Practical example of calculating an area of an rectangle:
  int length = 4;
  int width = 6;
  int area;

  // Calculate the area:
  area = length * width;

  // Print the practical example:
  printf("Length is: %d\n", length);
  printf("Width is: %d\n", width);
  printf("Area of the rectangle is: %d\n\n", area);
  /*printf("Length is: %i\n", length);
  '%d' is the same compared to '%d'*/

  // For a test:
  char myGrade = 'B';

  printf("My grade this year is going to be a %c.\n\n", myGrade);

  // For decimal numbers use either 'float' oder 'double'!
  float myDecNum = 5.75;

  printf("%f\n", myDecNum);

  double myDouNum = 3.14159;

  printf("%lf\n\n", myDouNum);

  // For scientific numbers e is used! (6 digits after comma because of float or
  // double)
  float f1 = 35e3;
  double d1 = 12e4;

  printf("%f\n", f1);
  printf("%lf\n", d1);

  // For scientific numbers with variable digits after comma use '.' with number
  // of shown digits showed!
  float f01 = 3.14159;

  printf("%.3f\n\n", f01);

  // To display the size of memory usage per variable use 'sizeof'
  int myInt;
  float myFloat1;
  double myDouble1;
  char myChar1;

  printf("%zu\n", sizeof(myInt));
  printf("%zu\n", sizeof(myFloat1));
  printf("%zu\n", sizeof(myDouble1));
  printf("%zu\n", sizeof(myChar1));

  // A real-life example of using different data types:

  int items = 50;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item;
  char currency = '$';

  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n\n", total_cost, currency);

  // Working only with integers e.g. divisions are not displayed as expected:
  int t = 5;
  int r = 2;
  int mySum = 5 / 2;

  printf("%d\n\n", mySum); // Output is going to be 2!

  // By type conversion and with the decimal precision the expected result is
  // displayed correctly!
  int numx = 5;
  int numy = 2;
  float sumxy = (float)numx / numy;

  printf("%.1f\n\n", sumxy);

  // Real-life example for a program to calculate the percentage of a user's
  // score in relation to the maximum score:

  int maxScore = 500;
  int userScore = 423;
  float percentage = (float)userScore / maxScore * 100.0;

  printf("User's score-percentage is %.2f\n\n", percentage);

  // More data types are written as followed:
  int normalInt = 1000;
  double normalDouble = 3.14;

  short int small = -100;
  unsigned int count = 25;
  long int big = 1234567890;
  long long int veryBig = 987654321012345678;
  unsigned long long int huge = 18446744073709551615U;
  long double precise = 3.141592653589793238L;

  printf("Normal int: %d\n", normalInt);
  printf("Normal double: %lf\n", normalDouble);
  printf("Small: %hd\n", small);
  printf("Count: %u\n", count);
  printf("Big: %ld\n", big);
  printf("Very big: %lld\n", veryBig);
  printf("Huge: %llu\n", huge);
  printf("Precise: %Lf\n\n", precise);

  // To check sizes type:
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of short int: %zu bytes\n", sizeof(short int));
  printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
  printf("Size of long int: %zu bytes\n", sizeof(long int));
  printf("Size of long long int: %zu bytes\n", sizeof(long long int));
  printf("Size of unsigned long long int: %zu bytes\n",
         sizeof(unsigned long long int));
  printf("Size of long double: %zu bytes\n\n", sizeof(long double));

  // Constant variables always need to be assigned to a value and should be
  // written in uppercase letters
  const int MONTHSPERYEAR = 12;

  printf("%d\n\n", MONTHSPERYEAR);

  // Operators are used to perform operations on variables and values
  int sumx = 100 + 50;
  int sumy = sumx + 250;
  int sumz = sumy + sumy;

  printf("%d\n", sumx);
  printf("%d\n", sumy);
  printf("%d\n\n", sumz);

  // Arithmetic operators are used to perform common mathematical operations
  int s = 10;
  int w = 3;

  printf("%d\n", s + w);
  printf("%d\n", s - w);
  printf("%d\n", s * w);
  printf("%d\n", s / w);
  printf("%d\n", s % w);

  int z = 5;

  ++z;
  printf("%d\n", z);

  --z;
  printf("%d\n\n", z);

  // Real life example
  int peopleInRoom = 0;

  // 3 people enter
  peopleInRoom++;
  peopleInRoom++;
  peopleInRoom++;

  printf("%d\n", peopleInRoom);

  // 1 person leaves
  peopleInRoom--;

  printf("%d\n\n", peopleInRoom);

  // Assignment operators are used to assign values to variables
  int savings = 100;

  savings += 50;
  printf("Total savings: %d\n\n", savings);

  // Comparison operators are used to compare two values (or variables), this is
  // important in programming
  int passwordLength = 5;

  printf("%d\n", passwordLength >= 8);  // 0 (false), too short
  printf("%d\n\n", passwordLength < 8); // 1 (true), needs more characters

  // Logical values can also test for true or false values
  int xy = 5;

  printf("%d\n", xy < 10 && xy > 3);
  printf("%d\n", xy < 10 || xy < 2);
  printf("%d\n\n", !(xy < 7 && xy > 1));

  // If a calculation contains more than one operator, C follows order of
  // operations rules
  int result1 = 2 + 4 * 3;
  int result2 = (2 + 4) * 3;

  printf("%d\n", result1);
  printf("%d\n\n", result2);

  /*Boolean variables are used if only one of two variables is needed like:
   * - yes/no
   * - on/off
   * - true/false*/
  // Boolean variables are returned (werden behandelt) as integers
  bool isProgrammingFun = true;
  bool isFishTasty = false;

  printf("%d\n", isProgrammingFun);
  printf("%d\n\n", isFishTasty);

  // E.g. the result will be returned as a boolean value
  printf("%d\n", 10 > 9); // boolean value -> (1) = true
  printf("%d\n", 10 == 10);
  printf("%d\n", 10 == 15);
  printf("%d\n\n", 10 >= 14);

  // Real life example
  int myAge = 26;
  int votingAge = 18;

  printf("%d\n\n", myAge >= votingAge);

  // With conditional statements a block of code can be executed if the
  // condition is true or false Use the 'if' statement if the condition is
  // 'true'
  if (20 > 18) {
    printf("20 is greater than 18\n\n");
  }

  int ba = 20;
  int de = 18;

  if (ba > de) {
    printf("ba is greater than de\n\n");
  }

  // Use the 'else' statement if the condition is 'false'
  int time = 20;

  if (time < 18) {
    printf("Good day.\n\n");
  } else {
    printf("Good evening.\n\n"); // outputs "Good evening."
  }

  // Use the 'else if' statement to specify a new condition if the first one is
  // 'false'
  int timeNew = 15;

  if (timeNew < 10) {
    printf("Good morning.\n\n");
  } else if (timeNew < 20) {
    printf("Good day.\n\n");
  } else {
    printf("Good evening.\n\n");
  }

  /*There also is a short-hand 'if ... else', which is known as the ternary
   * operator. It can be used to replace multiple lines of code for simple 'if
   * ... else' statements.*/
  // variable = (condition) ? expresionTrue : expressionFalse;
  int dtime = 20;

  (time < 18) ? printf("Good day.\n\n") : printf("Good evening.\n\n");

  // Another 'if' statement can be placed inside another already existing 'if'
  // statement
  int te = 15;
  int ro = 25;

  if (te > 10) {
    printf("x is greater than 10\n");

    if (ro > 20) {
      printf("y is also greater than 20\n\n");
    }
  }

  // Real life example: Nested 'if' statements are useful if multiple conditions
  // that depend on each other need to be tested For nested 'if' statements the
  // first 'if' statement needs to be 'true' to check the second 'if' statement!
  int age = 20;
  bool isCitizen = true;

  if (age > 18) {
    printf("Old enough to vote.\n");

    if (isCitizen) {
      printf("And you are a citizen, so you can vote!\n\n");
    } else {
      printf("But you must be a citizen to vote.\n\n");
    }
  } else {
    printf("Not old enough to vote.\n");
  }

  /*Conditions can be combined or reversed with using logical operators ('&&',
   * '||', '!'). These work together with 'if', 'else' and 'else if'.*/
  // Use '&&' when both conditions must be true
  int ar = 200;
  int bt = 33;
  int cl = 500;

  if (ar > bt && cl > ar) {
    printf("Both conditions are true.\n\n");
  }

  // Use '||' when at least one conditions can be true
  if (ar > bt || cl < ar) {
    printf("At least one condition is true.\n\n");
  }

  // Use '!' to check if something is not the case
  if (!(ar < 33)) {
    printf("ar is NOT greater than bt\n\n");
  }

  // In real programs, logical operators are often used for access control (for
  // system access) Real life example
  bool isLoggedIn = true;
  bool isAdmin = false;
  int securityLevel = 3;

  if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
    printf("Access granted\n\n");
  } else {
    printf("Access denied\n\n");
  }

  // Real life example
  int doorCode = 1337;

  if (doorCode == 1337) {
    printf("Correct code.\nThe door is now open.\n\n");
  } else {
    printf("Wrong code.\nThe door remains closed.\n\n");
  }

  // Real life example
  int myNum3 = 1;

  if (myNum3 > 0) {
    printf("The value is a positive number.\n\n");
  } else if (myNum3 < 0) {
    printf("The value is a negative number.\n\n");
  } else {
    printf("The value is 0.\n\n");
  }

  // Real life example
  int myNumvy = 9;

  if (myNumvy % 2 == 0) {
    printf("The number is even.\n\n");
  } else {
    printf("The number is odd.\n\n");
  }

  // Instead of writing many 'if ... else' statements, one 'switch' can be used
  int day = 4;

  switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday\n\n");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  }

  // The default keyword specifies some code to run if there is no case match
  int dayNew = 4;

  switch (dayNew) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the weekend\n\n");
  }

  // The 'while' loop repeats a block of code as long as a specified condition
  // is true
  int i = 0;

  while (i < 5) { // As long as variable (i) is smaller than 5, the code will be
                  // executed
    printf("%d\n", i);
    i++; // Don't forget to increase the variable (i++), otherwise the loop will
         // never end!
  }
  printf("The number is not smaller than 5 anymore.\n\n");

  // The 'while' loop can also be used to count down
  int countdown = 3;

  while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
  }
  printf("Happy New Year!!\n\n");

  // If the condition of a 'while' loop is false from the beginning, the code
  // inside will neber run
  int ir = 10;

  while (ir < 5) {
    printf("This will never be printed!\n\n");
    i++;
  }

  // The 'do/while' loop always executes the code once before checking the
  // condition, and will repeat as long as the condition is true
  int ie = 0;

  do {
    printf("%d\n", ie);
    ie++;
  } while (ie < 5);
  printf("\n");

  // If the condition is false from the beginning, the code still will be
  // printed once
  int iu = 10;

  do {
    printf("iu is %d\n\n", iu);
    i++;
  } while (iu < 5); // This behavior makes 'do/while' useful when ensuring
                    // something happens at least once

  // Practical example
  // This example keeps asking the user to enter a positive number. The loop
  // stops when entering '0' or a negative number
  /*int number;

  do {
      printf("Enter a positive number: ");
      scanf("%d", &number);
  }
  while (number > 0);*/
  // Real life example: This code only prints even numbers between '0' and '10'
  // (inclusive)
  /*int iw = 0;

  while (iw <= 10) {
      printf("%d\n", iw);
      i += 2;
  }*/

  // Real life example: The 'while' loop is used to reverse some numbers
  int numbers = 12345;
  int revNumbers = 0;

  while (numbers) {
    revNumbers = revNumbers * 10 + numbers % 10;
    numbers /= 10;
  }
  printf("%d\n\n", revNumbers);

  // Real life example: A practical example to demonstrate a 'while' loop with
  // an 'if ... else' statement
  int dice = 1;

  while (dice <= 6) {
    if (dice < 6) {
      printf("No Yatzy\n"); //"No Yatzy" is printed while the loop passes the
                            // values ranging from '1' to '5'
    } else {
      printf("Yatzy!\n"); //"Yatzy" is printed if the loop passes the value '6'
    }
    dice = dice + 1;
  }
  printf("\n"); // Realized, that you can use 'print("\n")' for an extra
                // space-line without 'dependencies'

  // If the number of "loop through" a block of code is known, the 'for' loop is
  // used instead of 'while' loop To print numbers from '1' to '4'
  int ip;

  for (ip = 0; ip < 5; ip++) {
    printf("%d\n", ip);
  }
  printf("\n");

  // To print even numbers
  int ih;

  for (ih = 0; ih <= 10; ih = ih + 2) {
    printf("%d\n", ih);
  }
  printf("\n");

  // To calculate the sum of numbers from '1' to '5'
  int sumEA = 0;
  int ig;

  for (ig = 1; ig <= 5; ig++) {
    sumEA = sumEA + ig;
  }
  printf("Sum is %d\n\n", sumEA);

  // To print a countdown from '5' to '1'
  int iy;

  for (iy = 5; iy > 0; iy--) {
    printf("%d\n", iy);
  }
  printf("\n");

  // Another loop can be placed inside another loop, this is called a 'nested
  // loop'
  int rb, jh;

  for (rb = 1; rb <= 2; ++rb) {
    printf("Outer: %d\n", rb);

    for (jh = 1; jh <= 3; ++jh) {
      printf("Inner: %d\n", jh);
    }
    printf("\n");
  }
  printf("\n");

  // To print a simple multiplication table (1 to 3)
  int is, bk;

  for (is = 1; is <= 3; is++) {
    for (bk = 1; bk <= 3; bk++) {
      printf("%d", is * bk);
    }
    printf("\n");
  }
  printf("\n");

  // Real life example to create a program that counts to 100 by tens
  int ry;

  for (ry = 0; ry <= 100; ry += 10) {
    printf("%d\n", ry);
  }
  printf("\n");

  // To only print odd numbers
  int bm;

  for (bm = 1; bm < 10; bm = bm + 2) {
    printf("%d\n", bm);
  }
  printf("\n");

  // To print the powers of 2 up to 512
  int nw;

  for (nw = 2; nw <= 512;
       nw *= 2) { // Doesn`t matter if 'x *= n' or 'x = x * n' is typed
    printf("%d\n", nw);
  }
  printf("\n");

  // To create a program that prints the multiplication table for a specified
  // number
  int numberA = 2;
  int io;

  for (io = 1; io <= 10; io++) {
    printf("%d x %d = %d\n", numberA, io, numberA * io);
  }
  printf("\n");

  // The 'break' statement can also be used to jump out of a loop (firstly used
  // to jump out of a 'which' statement)
  int it;

  for (it = 1; it < 10; it++) {
    if (it == 4) {
      break;
    }
    printf("%d\n", it);
  }
  printf("\n");

  // The 'continue' statement breaks one iteration (in the loop), if a specified
  // condition occurs, and continues with the next iteration
  int et;

  for (et = 0; et < 10; et++) {
    if (et == 4) {
      continue;
    }
    printf("%d\n", et);
  }
  printf("\n");

  // The statements 'break' and 'continue' can also be combined in 'for loops'
  int eo;

  for (eo = 0; eo < 10; eo++) {
    if (eo == 2) {
      continue;
    }
    if (eo == 8) {
      break;
    }
    printf("%d\n", eo);
  }
  printf("\n");

  // The statements 'break' and 'continue' can also be used in 'while loops'
  int ew;

  while (ew < 10) {
    if (ew == 6) {
      break;
    }
    printf("%d\n", ew);
    ew++;
  }
  printf("\n");

  int eq;

  while (eq < 10) {
    if (eq == 7) {
      eq++; // The 'eq++' has to be written two times!
      continue;
    }
    printf("%d\n", eq);
    eq++;
  }
  printf("\n");

  // Real life example of a program which skips negative values, but stops
  // completely if finding a zero
  int myNumbers[] = {3, -1, 7, 0, 9};
  int lengthNew = sizeof(myNumbers) / sizeof(myNumbers[0]);
  int gt;

  for (gt = 0; gt < lengthNew; gt++) {
    if (myNumbers[gt] < 0) {
      continue; // skips negative numbers
    }
    if (myNumbers[gt] == 0) {
      break; // stops loop when zero is found
    }
    printf("%d\n", myNumbers[gt]);
  }
  printf("\n");

  /*Arrays are used to store multiple values in a single variable, instead of
   * declaring separate variables for each value. To create an array, define the
   * data type (like 'int') and specify the name of the array followed by
   * 'square brackets' ([]). To insert values to it, use a comma-separated list
   * inside curly braces (all values have to be the same data type (like
   * integers)).*/
  int newNumbers[] = {25, 50, 75,
                      100}; // The variable now holds an array of for integers

  // To access the elements of an array, refer to it`s index number. Array
  // indexes start with '0' ([0]), the second index is ([1]) etc.
  int newNumbers1[] = {25, 50, 75, 100};

  printf("%d\n", newNumbers1[0]); // This outputs the number '25'
  printf("\n"); // The space line command needs one '\n' in the number printing
                // command and another one separately!

  // To change the value of a specific element, refer to the index number
  // EDIT: Not working at the moment! Problem solved: Integers are not allowed
  // in the variable`s name!
  int myNumb[] = {25, 50, 75, 100};
  myNumb[0] = 33;

  printf("%d\n", myNumb[0]);
  printf("\n");

  // Another common way to create arrays, is to specify the size of the array
  // and add elements later
  int myNumberz[4];

  myNumberz[0] = 25;
  myNumberz[1] = 50;
  myNumberz[2] = 75;
  myNumberz[3] =
      100; // The number of array elements should be known in advance, the size
           // of the array can`t be changed after creation

  printf("%d\n", myNumberz[2]);
  printf("\n");

  // To get the size of an array, use the 'sizeof' operator (from the 'data
  // types' chapter!)
  int myNumera[] = {10, 25, 50, 75, 100};

  printf("%zu",
         sizeof(myNumera[0])); // Prints '20' because one 'int' type is 4 MB
  printf("\n\n"); // For 'sizeof' command both space line commands have to be
                  // inside a separate printing command!

  // To receive the number of elements inside an array, use this 'formula'
  // ('sizeof'-combined divided by 'sizeof'-element)
  int newerNumbers[] = {5, 10, 15, 20, 25, 30};
  int lengthNewer =
      sizeof(newerNumbers) /
      sizeof(newerNumbers[0]); //'sizeof'-combined divided by 'sizeof'-element
                               //(in MB -> prints same result)

  printf("%d\n", lengthNewer); // The 'sizeof' formula works for arrays of any
                               // type and any size
  printf("\n");

  /*A 'for' loop can be used to go through the elements of an array by writing
   * the size of the array in the loop condition. This is not ideal, since it
   * will only work for for arrays of a specified size*/
  int myNewNumbers[] = {25, 50, 75, 100};
  int in;

  for (in = 0; in < 4; in++) {
    printf("%d\n", myNewNumbers[in]);
  }
  printf("\n");

  /*With the 'sizeof' formula it is possible to calculate the number of elements
   * in an array. Now it can be used to write loops that work for arrays of any
   * size.*/
  int myNewNumera[] = {25, 50, 75, 100, 125, 150, 175};

  int length9 = sizeof(myNewNumera) / sizeof(myNewNumera[0]);
  int il;

  for (il = 0; il < length9; il++) {
    printf("%d\n", myNewNumera[il]); // Remember that the number of array
                                     // elements can`t be changed later!
  }
  printf("\n");

  // Real life example of a program using arrays that calculates the average of
  // different ages
  int ages[] = {20, 22, 18, 35,
                48, 26, 87, 70}; // An array storing different ages

  float avg, sum29 = 0;
  int iq;

  int length1 = sizeof(ages) / sizeof(ages[0]); // Get the length of the array

  for (iq = 0; iq < length1; iq++) { // Loop through the elements of the array
    sum29 += ages[iq];
  }
  avg = sum29 /
        length1; // Calculate the average by dividing the sum by the length

  printf("The average age is: %.2f", avg);
  printf("\n\n");

  /*The previous arrays are known as single dimension arrays.
  If data needs to be stored as a tabular form (like a table), multidimensional
  arrays have to be used.*/
  // A 2D array is also known as a matrix (a table of rows and columns).
  int matrix[2][3] = {
      {1, 4, 2},
      {3, 6, 8}}; // The first dimension represents the number of rows [2], the
                  // second dimension represents the number of columns [3]

  printf("%d\n\n",
         matrix[0][2]); // Remember that array indexes start with 0 -> [0] is
                        // the first element, [1] is the second element etc.

  // To change the value of an element, refer to the index number of the element
  // in each of the dimensions
  int matrix1[2][3] = {{1, 4, 2}, {3, 6, 8}};
  matrix1[0][0] = 9;

  printf("%d", matrix1[0][0]);
  printf("\n\n"); // Instead of '1' the number '9' will be printed!

  // To loop through a multi-dimensional array, one loop per array`s dimension
  // is needed
  int matrix2[2][3] = {{1, 4, 2}, {3, 6, 8}};
  int iv, jb;

  for (iv = 0; iv < 2; iv++) {
    for (jb = 0; jb < 3; jb++) {
      printf("%d\n", matrix2[iv][jb]);
    }
  }
  printf("\n");

  // Arrays with more than two dimensions can also be declared
  int example[2][3]
             [4]; // A 3D array with 2 blocks, each with 3 rows and 4 columns

  // Strings are used for storing text/characters. Use the 'char' type and
  // create an array of characters to make a string.
  char greetings[] = "Hello World!";

  printf("%s\n\n", greetings); // The '%s' format specifier tells C that it is
                               // working with a string

  // To access a string, refer to it`s index number (because it is an array)
  // inside square brackets
  char text[] = "Hello everybody!";

  printf("%c\n\n", text[0]); // If access of the string is needed, use the '%c'
                             // (character) format specifier!

  // Strings can also be modified, refer to the index number and use single
  // quotes
  char newText[] = "The first character will not be correct!";
  newText[0] = 'N';

  printf("%s\n\n", newText);

  // A string can also be looped through, to do so use the 'for' loop
  char carName[] = "Volvo";
  int hk;

  for (hk = 0; hk < 5; ++hk) { // The 'sizeof' formula should be used instead!
    printf("%c\n", carName[hk]);
  }
  printf("\n");

  // To make the loop more sustainable, use the 'sizeof' formula instead of
  // manually writing the size of the array!
  char carNameNew[] = "Mercedes";
  int length8 = sizeof(carNameNew) / sizeof(carNameNew[0]);
  int ik;

  for (ik = 0; ik < length8; ++ik) { // If 'ik' would be set to 1 (ik = 1), the
                                     // 'M' would be missing!!!
    printf("%c\n", carNameNew[ik]);
  }
  printf("\n");

  // A string can also be created with a set of characters. Dont forget to
  // include the "null terminating character" at the end!
  char greetingsNew[] = {'H', 'e', 'l', 'l', 'o', ' ',
                         'W', 'o', 'r', 'l', 'd', '\0'};

  printf("%s\n\n", greetingsNew);

  // The first method of creating strings is easier to write and the "null
  // terminating character" is implemented by C automatically
  char greetings1[] = {'H', 'e', 'l', 'l', 'o', ' ',
                       'W', 'o', 'r', 'l', 'd', '\0'};
  char greetings2[] = "Hello World";

  printf("%zu\n", sizeof(greetings1)); // Outputs 12
  printf("%zu\n",
         sizeof(greetings2)); // Outputs 12 because both have 12 characters
  printf("\n\n");

  // Real life example of using strings to create a simple welcome message
  char message[] = "Good to see you,";
  char fname[] = "John";

  printf("%s %s!", message, fname);
  printf("\n\n");

  // Because strings have to be written in double quotes, C would misunderstand
  // a quote and generate an error
  char txt[] = "We are the so-called \"Vikings\" from the north.";

  printf("%s\n\n",
         txt); // To write a quote, use the "backslash escape character" (\")

  // The "backslash escape character" has to be used for the two other
  // characters too
  char txt1[] = "Everything\'s alright.";

  printf("%s\n\n", txt1);

  char txt2[] = "The character \\ is called backslash.";

  printf("%s\n\n", txt2);

  // Other popular escape characters in C are
  char txt3[] = "This wil be printed\n in a new line";
  printf("%s\n", txt3);

  char txt4[] = "This is a\ttab";
  printf("%s\n", txt4);

  printf("\n");

  // C also has many useful string functions, which can be used to perform
  // certain operations on strings. To get the length of a string, use the
  // 'strlen()' function
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("%zu", strlen(alphabet));
  /*'strlen' behaves differently, as 'sizeof' also includes the '\0' character
   * when counting. Using 'sizeof' would print the size in bytes (and only with
   * the 'sizeof' formula -> dividing the size of characters would be shown)*/

  // To concatenate (combine) two strings, use the 'strcat()' function
  char str1[20] = "Hello ";
  char str2[] = "World!";

  strcat(str1, str2); // Result is stored in str1!
  printf("%s", str1);

  // To copy the value of one string to another, use the 'strcpy()' function
  char str3[20] = "Hello World!";
  char str4[20];

  strcpy(str4, str3);
  printf("%s", str4);

  // To compare two strings, use the 'strcmp()' function
  char str5[] = "Hello";
  char str6[] = "Hello";
  char str7[] = "Hi";

  printf("%d\n",
         strcmp(str5, str6)); // Returns 0 (because both strings are equal!)
  printf("%d\n",
         strcmp(str5, str7)); // Returns -4 (because the strings are not equal!)

  //'printf()' is used to output values in C. To get user input, use the
  //'scanf()' function.
  int myNum1 = 0;

  printf("Type in a number and press enter: \n");

  scanf("%d", &myNum1);

  printf("Your number is: %d\n", myNum1);

  // The 'scanf()' function also allows multiple inputs (e.g. integer and
  // character)
  int myNum2;
  char myChar2;

  printf("Type a number AND a character and press enter: \n");

  scanf("%d %c", &myNum2, &myChar2);

  printf("Your number is: %d\n", myNum2);
  printf("Your character is: %c\n", myChar2);

  // A user can also enter a string
  char firstName[30]; // When working with strings in 'scanf()', the size of the
                      // string/array must be specified and the reference
                      // operator (&) is not needed!

  printf("Enter your first name: \n");

  scanf("%s", firstName);

  printf("Hello %s\n", firstName);

  // The 'scanf()' function has some limitations: it considers space as a
  // terminating character!
  char fullName[30];

  printf("Type in your full name: \n");

  scanf("%s", fullName); // Careful: Only the first name will be printed because
                         // of the termination of space!

  printf("Hello %s, with a space it`s not possible to print more than one word "
         "using the \'scanf()\' function.",
         fullName);
  printf("\n\n");

  // To avoid the space termination, the 'fgets()' function is used to read a
  // line of text
  char fullNameNew[30];

  printf("Type in your full name and press enter: \n");

  fgets(fullNameNew, sizeof(fullNameNew), stdin);

  printf("Your full name is %s\n", fullNameNew);

  /*When a variable is created in C, a memory address is assigned to the
  variable. When a value is assigned to the variable, it is stored in this
  memory address. To access it, use the reference operator (&) and the result
  represents where the variable is stored.*/
  int myAgeIs = 26;

  printf("%p\n", &myAgeIs); // Will be printed in a hexadecimal form (it`s a
                            // pointer value of '%p')

  // The memory address will be printed with the reference operator (&)
  int myNewAge = 26;

  printf("%d\n", myNewAge); // Outputs the value of myNewAge

  printf("%p\n", &myNewAge); // Outputs the memory address of myNewAge

  // A pointer is a variable that stores the memory address of another variable
  // as its value. It points to a data type (like int) of the same type, and is
  // created with the '*' operator
  int myAge1 = 26;
  int *ptr0 = &myAge1; // The type of both variables have to be the same!

  printf("%p\n", ptr0);

  // The value of a variable can also be printed with the pointer (pointer
  // points to the value of the variable) by using the (*) operator (dereference
  // operator)
  int myMomsAge = 59;
  int *ptr1 = &myMomsAge;

  printf("%d\n", *ptr1);

  // With pointers the memory addresses of arrays can also be printed
  int someNumbers[4] = {26, 51, 76, 101};
  int qa = 0;

  for (qa = 0; qa < 4; qa++) {
    printf("%p\n",
           &someNumbers[qa]); // Remember that the size of an 'int' type is 4
                              // bytes, which is why the last number of the
                              // addresses are different (with an addition of 4)
  }

  // In C the name of an array is actually a pointer to the first element inside
  // an array. The memory address of the array is the same as the memory address
  // of the first array element.
  int someMoreNumbers[4] = {13, 26, 39, 52};

  printf("%p\n", &someMoreNumbers);
  printf("%p\n", &someMoreNumbers[0]);

  // This means that the value of an array can be accessed by the dereference
  // operator (*) and the array`s name!
  int randomNumbers[4] = {32, 14, 68, 29};

  printf("%d\n", *randomNumbers);
  printf(
      "%d\n",
      *(randomNumbers +
        1)); // This method will print all of the contained values in the array!
  printf("%d\n", *(randomNumbers + 2));
  printf("%d\n", *(randomNumbers + 3));

  // The array can also be looped through with pointers
  int *ptr2 = randomNumbers; // Using [randomNumbers] from above!
  int ag = 0;

  for (ag = 0; ag < 4; ag++) {
    printf("%d\n", *(ptr2 + ag));
  }

  // It`s also possible to change the value of elements inside arrays
  *randomNumbers = 23; // Using [randomNumbers] from above again!

  *(randomNumbers + 1) =
      41; // The value of the first two elements are changed with this method!

  printf("%d\n", *randomNumbers);
  printf("%d\n", *(randomNumbers + 1));

  return 0;
}
