#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        double a, b, c, A, B, C;
        cin >> a >> b >> c >> C >> B >> A;
        double a1 = b*b + c*c - A*A;
        double b1 = c*c + a*a - B*B;
        double c1 = a*a + b*b - C*C;
        double vol = 4*(a*a)*(b*b)*(c*c) - (a*a)*(a1*a1) - (b*b)*(b1*b1) - (c*c)*(c1*c1) + a1*b1*c1;
        vol = sqrt(vol)/12;
        cout << fixed << setprecision(4) << vol << endl;   
    }
    return 0;
}