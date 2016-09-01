#include <iostream>
using namespace std;
#define MAX 1001

int main()
{
	int n;
	cin >> n;
	while(n != -1) {
		int arr[n];
		int sum = 0;
		for(int i = 0; i<n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		int div = sum/n;
		int ans = 0;
		if(div * n != sum)
			cout << "-1" << endl;
		else {
			for(int i = 0; i<n; i++) {
				if(arr[i] > div)
					ans += arr[i] - div;
			}
			cout << ans << endl;
		}
		cin >> n;
	}
	return 0;
}
