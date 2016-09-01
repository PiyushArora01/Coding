#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n != 0) {
		int arr[n], arr2[n];
		int i;
		for(i = 0; i<n; i++) {
			cin >> arr[i];
			arr2[arr[i]-1] = i+1;
		}
		int flag = 0;
		for(i = 0; i<n; i++) {
			if(arr[i] != arr2[i]) {
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout << "ambiguous" << endl;
		else
			cout << "not ambiguous" << endl;
		cin >> n;
	}
	return 0;
}
