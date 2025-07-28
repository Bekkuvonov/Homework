#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n;
	srand(time(NULL));
	printf("N >> ");
	scanf("%d",&n);
	int ms[n];
	for (int i = 0; i < n; i ++)
	{
		ms[i] = rand() % 100;
		printf("%d, ",ms[i]);
	}
	printf("\n\t\t***Lokal maximumlar***\n");
	int cnt = 0;
	for (int i = 1; i < n - 1; i ++)
	{
		if (ms[i] > ms[i - 1] && ms[i] > ms[i + 1])
		{
			printf("%d, ",ms[i]);
			cnt ++;
		}
	}
	if(cnt == 0)
		printf("LOkal maximumlar soni 0");
	return 0;
