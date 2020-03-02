#include <stdio.h>

int main()
{
  int c;
  c = getchar();
  while (c != EOF)
  {
    printf("putchar");
    putchar(c);
    c = getchar();
  }
}
