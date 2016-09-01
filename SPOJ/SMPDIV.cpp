#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int n, x, y;
        cin >> n >> x >> y;
        int i;
        for(i = 2; i < n; i++) {
            if(i % x == 0 && i % y != 0)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}