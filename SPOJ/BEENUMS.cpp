#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
	ll x;
	cin >> x;
	while(x != -1) {
		double y = sqrt((4*x - 1)/3);
		if(y == (int) y) {
			/*				No need since 4x - 1 is always odd
			if(y%2 == 1)
				cout << "Y";
			else
				cout << "N";
			*/
			cout << "Y" << endl;
		}
		else
			cout << "N" << endl;
		cin >> x;
	}
}
