#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	double x = log2(n);			//check if it is a power of 2
	if((int) x == x)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	return 0;
}

//Another way to check if it is a power of 2 is "n & (n-1) == 0"
