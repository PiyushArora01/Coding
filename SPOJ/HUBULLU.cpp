#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--) {
		int n, x;
		cin >> n >> x;
		if(x == 0)
			cout << "Airborne wins." << endl;
		else
			cout << "Pagfloyd wins." << endl;
	}
	return 0;
}
