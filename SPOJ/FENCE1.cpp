#include <iostream>
#include <iomanip>		//for setprecision()
using namespace std;

int main()
{
	int val;
	cin >> val;
	while(val) {
		double ans;
		ans = val*val/6.283185307179586476925286766559;
		cout << fixed << setprecision(2) << ans << endl;		//fixed keyword is necessary otherwise it doesn't attach 0s or use printf("%.2f\n", ans);
		cin >> val;
	}
	return 0;
}
