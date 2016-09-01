#include <stdio.h>
#include <math.h>

int main()
{
	int test;
	scanf("%d", &test);
	int i;
	for(i = 0; i<test; i++)
	{
		int n1, n2;
		scanf("%d", &n1);
		int arr1[n1], j;
		for(j = 0; j<n1; j++)
			scanf("%d", &arr1[j]);
		scanf("%d", &n2);
		int arr2[n2];
		for(j = 0; j<n2; j++)
			scanf("%d", &arr2[j]);
		int k, min=1000000;		//the problem is that if we initialise min to 1 and there is no such case where min is 1, so it prints min 1 which results 
		// in wrong answer, hence we initialise it to a large value.
		for(j = 0; j<n1; j++)
		{
			for (k = 0; k<n2; k++)
			{
				if(min==0)
					break;
				else
				{
					if(min > abs(arr1[j] - arr2[k]))
						min = abs(arr1[j] - arr2[k]);
				}
			}
		}
		printf("%d\n", min);
	}
	return 0;
}
