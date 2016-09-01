#include <stdio.h>

int main()
{
	int test;
	int i;
	scanf("%d", &test);
	for(i = 0; i<test; i++) {
		int num;
		scanf("%d", &num);
		if(num%2 != 0) {
			printf("%d\n", num/2 +1);
		} else
			printf("%d\n", num/2);
	}
}
