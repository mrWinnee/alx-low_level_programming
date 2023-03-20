#include <stdio.h>

int main()
{
  /*
  * c program that write combinations of two digits
  */
  char nums[] = {'0','1','2','3','4','5','6','7','8','9'};
  int i;
  int j;
  for (i = 0; i < 10; i++) {
    for (j = i+1;j < 10; j++){
      putchar(nums[i]);
      putchar(nums[j]);
      putchar(',');
      putchar(' ');
    }
  }
  putchar('\n');
  return 0;
}
