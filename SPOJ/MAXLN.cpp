#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int t = 1; t<=test; t++) {
        double r;
        cin >> r;
        double ans = 4*r*r + 0.25;
        cout << "Case " << t << ": " << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}