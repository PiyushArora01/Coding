#include <iostream>
using namespace std;

int main()
{
	double x;
	cin >> x;
	while(x != 0) {
		double n = 2;
		double i;
		double sum = 0;
		for(i = 0; sum<x; i++) {
			sum += (1/n++);
		}
		cout << i << " card(s)" << endl;
		cin >> x;
	}
}
