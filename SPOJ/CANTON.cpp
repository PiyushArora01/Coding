#include <iostream>
using namespace std;
#define MAX 1000024

int main()
{
	int test;
	cin >> test;
	while(test--) {
		int i, j;						//(i, j) base is taken as (1,1)
		int n, k;						//k is counter
		cin >> n;
		i = j = k = 1;
		while(k < n) {
			j++, k++;					//move 1 step horizontally
			
			if(k == n)
				break;
				
			while(j>1 && k<n) {			//move downwards diagonally till j = 1
				i++, j--, k++;
			}
			
			if(k == n)
				break;
				
			i++, k++;					//move vertically once when j = 1
			if(k == n)
				break;
			
			while(i>1 && k<n) {
				i--, j++, k++;			//move upwards diagonally till i = 1
			}
		//	if(k == n)					not required since after this, it will automatically end
		//		break;
		} 
		cout << "TERM " << n << " IS " << i << "/" << j << endl;
	}
	
	return 0;
}
