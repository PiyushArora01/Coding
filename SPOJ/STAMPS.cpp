#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int i;
	for(i = 0; i<t; i++)
	{
		int need;
		cin >> need;
		int n;
		cin >> n; // number of friends
		int stamps[n];
		int j;
		long long total = 0;
		for(j = 0; j < n; j++ ) {
			cin >> stamps[j];
			total += stamps[j];
		}
		if( total < need )
		{
			cout << "Scenario #" << (i+1) << ":" << endl << "impossible" << endl << endl;
		}
		else
		{
			j = 0;
			sort(stamps+0, stamps+n, greater<int>());
			long long total2 = 0;
			while (total2 < need)
			{
				total2 += stamps[j];
				j++;
			}
			cout << "Scenario #" << (i+1) << ":" << endl << j << endl << endl;
		}
	}
	return 0;
}
