#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, m, d;
		cin >> n >> m >> d;
		int arr[n];
		int dTotal = m*d;
		for(int i = 0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+n, greater<int>());
		int chk = 0;
		for(int i = 0; i<m; i++) {
			if(arr[i] > 2*d) {
				arr[i] -= d;
				i--;
				m--;
			}
			else if(arr[i] > d) {
				arr[i] -= d;
			}
			else {
				chk = 1;
				break;
			}
		}
		if(chk == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
