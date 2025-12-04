#include <stdio.h>

int main() {

  FILE *fptr;

  // create a file
  fptr = fopen("testfile.txt", "w");

  // write some text to the file
  fprintf(
      fptr,
      "Some text in the first created file"); // text is not memorized after eraze and new inserted text!

  // close the file
  fclose(fptr); // considered good practice!

  FILE *fptr1;

  //create a file
  fptr1 = fopen("newtestfile.txt",
                "a"); // the 'a' (appends) lets the file memorize previous text

  //write some text to the new file
  fprintf(
      fptr1,
      "New text which will be memorized after erazing!"); // text will be memorized!

  //close the file
  fclose(fptr1); // considered good practice!

  FILE *fptr2;

  //open a file in read mode
  fptr2 = fopen("testfile.txt", "r"); // 'r' will open the file for reading!

  //create a string to store the content of the file
  char myString
      [100]; // the string should be big enough to store the whole content!

  //to read the content of 'testfile2.txt', use the fgets() function
  fgets(
      myString, 100,
      fptr); // 'myString' specifies where to store the file content, '100' specifies the size and fptr points to the used file

  //print the file content
  while (fgets(myString, 100, fptr)) {
    printf("%s", myString);
  } // the 'while' function lets it read every line of content, not just the first one!

  //close the file
  fclose(fptr2); // remember, good practice!

  // if a file is called for reading and does not exist yet, the 'fopen()' function will return 'NULL'
  FILE *fptr3;

  //open a file in read mode
  fptr3 = fopen("loremipsum.txt", "r");

  //print some text if the file does not exist -> considered as good practice!
  if (fptr3 == NULL) {
    printf("Not able to open the file.\n");
  }

  //close the file
  fclose(fptr3);

  //real life example
  FILE *fptr4;

  //open a file in read mode
  fptr4 = fopen("filename.txt", "r");

  //store the content of the file
  char myString1[100];

  //if the file does exist
  if (fptr4 != NULL) {

    //read the content and print it
    while (fgets(myString1, 100, fptr)) {
      printf("%s\n", myString1);
    }

    //if the file does not exist
  } else {
    printf("Not able to open the file.\n");
  }

  //close the file!
  fclose(fptr4);

  return 0;
}
