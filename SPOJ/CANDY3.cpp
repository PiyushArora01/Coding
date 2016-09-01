#include <iostream>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while(test--) {
		cout << endl;
		ll n;
		ll x;
		cin >> n;
		ll i;
		ll sum = 0;
		for(i = 0; i<n; i++) {
			cin >> x;
			sum = (sum + x%n)%n;
		}
		if(sum == 0)
			cout << "YES" << endl;
		else
			cout << "NO\n";
	}
	return 0;
}
