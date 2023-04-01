#include <stdio.h>
int main()
{
   int a, b, *p, *q, sum;

   printf("Enter two numbers=\n");
   scanf("%d%d", &a, &b);

   p = &first;
   q = &second;

   sum = *p + *q;

   printf("Sum  = %d\n", sum);

   return 0;
}
