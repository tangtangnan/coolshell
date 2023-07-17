/* main.c */
#include <stdio.h>
#include "t.h"
int b;
int c;
int main()
{
    foo();
    printf("main:(&a)=0x%08x\n(&b)=0x%08x\n(&c)=0x%08x\nsizeof(b)=%d\nb=%d\n\tc=%d\n",
        &a, &b, &c, sizeof b, b, c);
  return 0;
}