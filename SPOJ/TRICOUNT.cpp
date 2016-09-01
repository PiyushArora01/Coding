/*
Number of triangles in an equilateral triangle of side of length N is given by:
N*(N+2)*(2N+1)/8 if N is even and (N*(N+2)*(2N+1) - 1)/8 if N is odd
*/

#include <iostream>
using namespace std;
#define llu long long unsigned

int main()
{
	int test;
	cin >> test;
	while(test--) {
		llu n;
		llu sum;
		cin >> n;
		if(n%2 == 0) {
			sum = n*(n+2)*(2*n+1)/8;
		} else {
			sum = (n*(n+2)*(2*n+1)-1)/8;
		}
		cout << sum << endl;
	}
	return 0;
}
