#include <stdio.h>
int main()
{
    int a[5][5];
    int i, j;
    printf("Massiv elementlari >>\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            if (i < j)
                a[i][j] = 0;
    }
    printf("\nResult\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}
