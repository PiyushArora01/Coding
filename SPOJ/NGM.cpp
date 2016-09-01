#include <iostream>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin >> n;
	if(n%10 == 0)
		cout << 2 << endl;
	else
		cout << 1 << endl << n%10 << endl;
}
