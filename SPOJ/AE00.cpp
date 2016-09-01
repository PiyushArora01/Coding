#include<stdio.h>
#include<math.h>

int factors(int num)
{
    int i;
    int fact=1;
    for(i = 2; i<=sqrt(num); i++)
    	if(num%i==0)
    		fact++;
    return fact;
}

int main()
{
    int i, num, count=0;
    scanf("%d", &num);
    for(i = 1; i<=num; i++)
    	count += factors(i);
    printf("%d", count);
    return 0;
}

