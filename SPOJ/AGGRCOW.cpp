#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll Func(ll x, ll *arr, ll n, ll c)
{
	ll cowsPlaced = 1;		//first cow in leftmost stall
	ll lastPos = arr[0];
	ll i;
	for(i = 1; i<n; i++) {
		if(arr[i] - lastPos >= x) {
			if(++cowsPlaced == c)
				return 1;
			lastPos = arr[i];
		}
	}
	return 0;
}

int main()
{
	ll test;
	cin >> test;
	while(test--) {
		ll n, c;
		cin >> n >> c;
		ll i;
		ll arr[n];
		for(i = 0; i<n; i++)
			cin >> arr[i];
		sort(arr+0, arr+n);
		
		ll start = 0;
		ll end = arr[n-1] - arr[0] + 1;	//max dist
		ll mid;
		while(end - start > 1) {
			mid = (start+end)/2;
			if(Func(mid, arr, n, c))
				start = mid;
			else
				end = mid;
		}
		cout << start << endl;
	}
	return 0;
}
