#include <iostream>
using namespace std;

int main()
{
    int a, d;
    cin >> a >> d;
    while(a!=0 && d!=0) {
        int minA = INT_MAX;
        int i, x;
        for(i = 0; i<a; i++) {
            cin >> x;
            if(x < minA)
                minA = x;
        }
        int min1 = 1000000;
        int min2 = 1000001;
        for(i = 0; i<d; i++) {
            cin >> x;
            if(x <= min1) {
                min2 = min1;
                min1 = x;
            } else if(x <= min2) {
                min2 = x;
            }
        }
        if(minA >= min1 && minA >= min2)
            cout << "N" << endl;
        else
            cout << "Y" << endl;
        cin >> a >> d;
    }
    return 0;
}