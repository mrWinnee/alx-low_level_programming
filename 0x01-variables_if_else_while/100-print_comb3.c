#include <stdio.h>

int main()
{
  /*
  * c program that write combinations of two digits
  */
  int i;
  int j;
  for (i = 0; i < 10; i++) {
    for (j = i+1;j < 10; j++){
      putchar('0' + i);
      putchar('0' + j);
      putchar(',');
      putchar(' ');
    }
  }
  putchar('\n');
  return 0;
}
