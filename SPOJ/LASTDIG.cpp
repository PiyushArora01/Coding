/*. 0 1 2 3 4 5 6 7 8 9
0 - 0 0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 1 1 1
2 1 2 4 8 6 3 4 8 6 2
3 1 3 9 7 1 3 9 7 1 3
4 1 4 6 4 6 4 6 4 6 4
5 1 5 5 5 5 5 5 5 5 5
6 1 6 6 6 6 6 6 6 6 6
7 1 7 9 3 1 7 9 3 1 7
8 1 8 4 2 6 8 4 2 6 8
9 1 9 1 9 1 9 1 9 1 9
*/
#include <iostream>
#include <string>
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
		cin >> a >> b;
		cout << ModularExpo(a, b, 10) << endl;
	}
	return 0;
}
