#include <iostream>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while(test--) {
		ll n;
		cin >> n;
		ll mod = 1000007;
		ll ans = (3*n*n + n)/2;
		ans = ans%mod;
		cout << ans << endl;
	}
	return 0;
}
