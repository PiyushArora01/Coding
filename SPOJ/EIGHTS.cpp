#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--) {
		long long n;
		cin >> n;
		long long x = 192 + 250*(n-1);
		cout << x << endl;
	}
}
