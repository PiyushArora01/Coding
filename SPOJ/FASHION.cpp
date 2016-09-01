#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int i;
		int men[n];
		int women[n];
		for(i = 0; i<n; i++)
			cin >> men[i];
		for(i = 0; i<n; i++)
			cin >> women[i];
		sort(men, men+n);
		sort(women, women+n);
		long sum = 0;
		for(i = 0; i<n; i++)
			sum+= men[i]*women[i];
		cout << sum << endl;
	}
}
