#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

ll ModularExpo(ll base, ll expo, int mod)		// (a^b)%n
{
	ll ans = 1;
	while(expo) {
		if(expo % 2 == 1)
			ans = (ans * base)%mod;
		expo = expo >> 1;						//right shift 1100 >> 1 = 0110		base = (base * base) % mod;
		base = (base * base)%mod;
	}
	return ans;
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		ll a, b;
		string x;
		cin >> x >> b;
		int size = x.size();
		a = x[size-1] - '0';
		cout << ModularExpo(a, b, 10) << endl;
	}
	return 0;
}
