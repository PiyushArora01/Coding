#include <iostream>
using namespace std;

#define ll long long

ll nCk (ll n, ll k)
{
    if(k*2 > n)
        k = n - k;      //since C(n, k) = C(n, n-k)
    ll ans = 1;
    ll i;
    
    for(i = 1; i<=k; i++) {
        ans = ans*(n-k+i);
        ans = ans/i;
    }
    return ans;
}

int main()
{
    int test;
    cin >> test;
    while(test--) {
        ll n, k;
        cin >> n >> k;
        ll ans = nCk(n-1, k-1);
        cout << ans << endl;
    }
    return 0;
}
