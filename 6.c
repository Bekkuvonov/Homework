#include <string.h>
#include <ctype.h>
int isPali(char *w)
{
   	int len = strlen(word);
    	int l = 0, r = l - 1;
	while (left < right)
	{
        	if (w[l] != w[r])
            		return 0;
        	l++;
        	r--;
    	}
    	return 1;
}
int main()
{
    	FILE *f = fopen("input2.txt", "r");
    	if (file == NULL)
	{
        	printf("WRONG!\n");
        	return 0;
    	}
    	FILE *o = fopen("palindrom.txt", "w");
    	if (o == NULL)
	{
        	printf("WRONG!\n");
        	fclose(f);
        	return 0;
    	}
    	char word[100];
    	while (fscanf(file,"%s",word) == 1)
	{
        	int len = strlen(word);
        	for (int i = 0; i < len; i++)
		{
            		word[i] = tolower(word[i]);
        	}
        	if (isPali(word))
		{
            		fprintf(o,"%s\n",word);
        	}
    	}
    	fclose(f);
    	fclose(o);
    	return 0;
}
