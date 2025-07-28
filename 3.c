#include <stdio.h>
  #include <string.h>
  void function(char *c)
  {
          int n = strlen(c);
          int j = 0;
          while (j < n)
          {
                  if (c[j] == '+')
                 {
                         n += 2;
                         c = realloc(c,n * sizeof(char));
                         for (int i = n - 1; i > j; i --)
                                 c[i] = c[i - 2];
                         c[j + 1] = '+';
                         c[j + 2] = '+';
                         j += 2;
                 }
                 j ++;
         }
         c[j] = '\0';
 }
 int main()
 {
         char str[100];
         printf("Satrni kiriting");
         scanf("%[^\n]%*c",str);
         function(str);
         puts(str);
         return 0;
 }
