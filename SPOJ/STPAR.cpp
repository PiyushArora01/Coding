#include<stdio.h>
#define MAX 1000
struct Stack {
	
	int arr[MAX];
	int top;
	void Push(int x) {
		arr[++(top)] = x;
	}
	void Pop() {
		top--;
	}
	int Top() {
		return arr[top];
	}

};
	
	
int main()
{
	int n;
	struct Stack S;
	S.top = -1;
	scanf("%d", &n);
	while(n!=0)
	{
		int arr[n], arr2[n];
		int i = 0;
		int count=0;
		int chk = 1;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			if(arr[i] < chk)
			{
				arr2[count++] = arr[i];
			}
			else if (arr[i] == chk)
			{
				chk = i+1;
				arr2[count++] = arr[i];
			}
			else
			{
				
				S.Push(arr[i]);
			}
		}
		while(S.top!=-1)
		{
			arr2[count++] = S.Top();
			S.Pop();
		}
		
		if(arr2[0] == 1 && arr2[n-1] == n)
			printf("yes\n");
		else
			printf("no\n");
		scanf("%d", &n);	
		
	}
}
