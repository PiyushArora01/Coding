#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	int test;
	int i;
	scanf("%d", &test);
	for(i = 0; i<test; i++)
	{
		int n;
		int k;
		scanf("%d %d", &n, &k);
		int arr[n];
		int j;
		for(j = 0; j<n; j++)
			scanf("%d", &arr[j]);
		sort(arr, arr+n);
		int temp;
		temp = arr[k-1] - arr[0];
		if(k==1)
			printf("%d\n", temp);
		else
		{
			for(j = 0; j<n-k; j++)		//check every k consecture groups
										//take sorted array as 1 3 4 5 8 10, n = 6, k = 3
										//then initailly temp = a[2] - a[0] = 3
										//then start loop from 0 to n-k i.e. 3
										//then check a[k]-a[1], a[1+k] - a[2], a[j+k] - a[j+1]
			{
				int x = arr[j+k] - arr[j+1];
				if(temp > x)
					temp = x;
			}
			printf("%d\n", temp);
		}
	}
	
	return 0;
}
