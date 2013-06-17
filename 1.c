#include <stdio.h>
#define BANANA "bananas are things"
int main() {
  int a;
  scanf("%d", &a); /*Inputs and assigns the /signed/ /decimal/ /integer/ that is pointed to in the second argument. The & in the "&d" is used to fetch the address of a's memory. You could also pass a pointer.*/
  printf("You entered the number %d \n", a); /*Printing the /signed/ /decimal/ (not octal or binary) /integer/ that is the second argument.*/
  int* b = &a; /*B is now the address of the variable a in memory i.e. it is a /pointer/ to a.*/
  printf("You entered this number (%d) and it location in memory is %d. \n", *b, b); /*Observe the output and decide what this does. Also attempt to predict what will happen before you run this. You should be able to guess half of it.*/
  
  /* You should now know how pointers work. Pointers
   * are a fundamental element of programming.
   * Which often is supposed to be passed instead of
   * the actual variable because it is a more
   * efficient use of memory.
   */
  /* Here is a quick little rant about the #include 
   * and #define things. They are called 
   * preprocessors. #include includes all the code 
   * in a specified file though using it for not
   * standard libraries is not this easy. I'll show
   * you how to do it in time though. #define means
   * that the first argument will be replaced with
   * the second argument any time it appears in the 
   * program BEFORE it is being compiled. It is used
   * for defining things that don't need memory
   * dedicated to them, but do need to often be
   * changed through out the program in bulk. So it
   * is like a constant but something that you can
   * change easily before you compile.
   */
  printf(BANANA);
}
