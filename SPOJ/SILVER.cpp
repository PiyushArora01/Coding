#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n != 0) {
        int count = 0;
        int x = 1;
        while(x <= n) {
        	x *= 2;		//ans = number of bits required to represent the number - 1
        	count++;
		}
        cout << --count << endl;
        cin >> n;
    }
    return 0;
}
