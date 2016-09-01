#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strrev (char *str)		//linux does not have an strrev function
{
    if (!str) { 
        fprintf (stderr, "%s() Error: invalid string\n", __func__); 
        return NULL; 
    }

    char *begin = str;
    char *end = str + strlen (str) - 1;
    char tmp;

    while (end > begin)
    {
        tmp = *end;
        *end-- = *begin;
        *begin++ = tmp;
    }

    return str;
}

int main()
{
	int test;
	int i;
	scanf("%d", &test);
	for(i = 0; i < test; i++)
	{
		char a[100], b[100];
		scanf("%s %s", a, b);
		int rev_sum = atoi(strrev(a)) + atoi(strrev(b));
		int sum = 0;
		while (rev_sum != 0)
   		{
      		sum = sum * 10;
      		sum = sum + rev_sum%10;
      		rev_sum = rev_sum/10;
   		}
		printf("%d\n", sum);
	}
}
