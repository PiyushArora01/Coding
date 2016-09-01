#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
	int i=1;
	int j;
	while(1)
	{
		stack<char> S;
		char c[2000];
		int count = 0;
		scanf("%s", c);
		if(c[0]=='-')
			break;
		for(j=0;j<strlen(c);j++)
		{
			if(c[j]=='{')
			{
				if(S.empty() || )
			}
				S.push(c[j]);
			else if(c[j]=='}')
			{
				if(S.empty())
					count++;
				else if(S.top()=='{')
					S.pop();
			}
		}
		count+=S.size();
		printf("%d. %d\n",i++,count );
		
	}
	return 0;
}
