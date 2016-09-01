#include <iostream>
using namespace std;

int main()
{
	int g, b;
	cin >> g >> b;
	while(g != -1 && b != -1) {
		if(b == 0 && g == 0)
			cout << "0" << endl;
		else if(g == 0)
			cout << b << endl;
		else if(b == 0)
			cout << g << endl;
		else if(g > b) {
			int x = g/(b+1);
			if(x*(b+1) == g)
				cout << x << endl;
			else
				cout << x+1 << endl;
		} else if(b > g) {
			int x = b/(g+1);
			if(x*(g+1) == b)
				cout << x << endl;
			else
				cout << x+1 << endl;
		} else if(g == b)
			cout << "1" << endl;
		
		cin >> g >> b;
	}
	return 0;
}
