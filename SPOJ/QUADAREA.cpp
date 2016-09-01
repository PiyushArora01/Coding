#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        double a, b, c, d, semi, area;
        cin >> a >> b >> c >> d;
        semi = (a + b + c + d) / 2;
        area = (semi - a) * (semi - b) * (semi - c) * (semi - d);
        area = sqrt(area);
        cout << fixed << setprecision(2) << area << endl;
    }
    return 0;
}