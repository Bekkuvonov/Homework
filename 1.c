#include <stdio.h>
int function(int n)
{
	int a, res = 0, cnt = 0;
	while (n > 0)
	{
		a = n % 10;
		n = n/10;
		if (a % 2 == 1)
		{
			cnt = a * a;
			res = res + cnt;
		}
	}
	return res;
}
int main()
{
	int n;
	printf("N >> ");
	scanf("%d",&n);
	printf("%d",function(n));
	return 0;
}
