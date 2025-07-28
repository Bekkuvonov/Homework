#include <stdio.h>
void function(long number, long *root)
{
          while(*root * *root < number)
                  *root = *root + 1;
}
int main()
{
          long n,res;
         printf("N >> ");
         scanf("%ld",&n);
         res = 0;
         function(n,&res);
         printf("Natija = %ld\n",res);
         return 0;
}
