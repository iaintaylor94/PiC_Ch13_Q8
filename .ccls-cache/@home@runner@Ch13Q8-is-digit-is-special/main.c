// Digit and special macros

#include <stdio.h>

#define IS_UPPER_CASE(x) (x) >= 'A' && (x) <= 'Z' ? 1 : 0
#define IS_LOWER_CASE(x) (((x) >= 'a') && ((x) <= 'z'))

#define IS_ALPHABETIC(x) IS_UPPER_CASE((x)) || IS_LOWER_CASE((x))
#define IS_DIGIT(x) (x) >= 0 && (x) <= 9 ? 1 : 0

#define IS_SPECIAL(x) !(IS_ALPHABETIC(x) || IS_DIGIT(x))

int main(void) {

  // Testing "IS_DIGIT(x)"
  printf ("%d\n", IS_DIGIT(4));      // 1 = true
  printf ("%d\n", IS_DIGIT('a'));    // 0 = false
  printf ("%d\n", IS_DIGIT(':'));    // 0 = false
  printf ("\n");

  // Testing "IS_SPECIAL(x)"
  printf ("%d\n", IS_SPECIAL(2));    // 0 = false
  printf ("%d\n", IS_SPECIAL('d'));  // 0 = false
  printf ("%d\n", IS_SPECIAL('@'));  // 1 = true
  
  
  return 0;
}