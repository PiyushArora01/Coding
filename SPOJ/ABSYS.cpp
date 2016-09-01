#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int test;
	scanf("%d", &test);
	int i;
	for(i = 0; i < test; i++)
	{
		printf("\n");
		char a[100], b[100], c[100];
		int x, y, z;
		scanf("%s + %s = %s", a, b, c);
		char srch[] = "machula";
		if(strstr(a, srch) != NULL) //Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
		{
			y = atoi(b);
			z = atoi(c);
			x = z-y;
		}
		else if(strstr(b, srch) != NULL)
		{
			x = atoi(a);
			z = atoi(c);
			y = z-x;
		}
		else if(strstr(c, srch) != NULL)
		{
			x = atoi(a);
			y = atoi(b);
			z = x+y;
		}
		printf("%d + %d = %d\n", x, y, z);
	}
	return 0;
}
