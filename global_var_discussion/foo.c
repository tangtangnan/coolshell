#include <stdio.h>
#include "t.h"
struct {
   char a;
   int b;
} b = { 2, 4 };
int main();
void foo()
{
    printf("foo:(&a)=0x%08x\n(&b)=0x%08x\nsizeof(b)=%d\nb.a=%d\nb.b=%d\nmain:0x%08x\n",
        &a, &b, sizeof b, b.a, b.b, main);
}