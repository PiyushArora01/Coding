#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int pos[1001] = {0}, neg[1001] = {0};
        int x;
        int j = 0;
        int ans, flag = 0;
        for(j = 0; j < n; j++) {
            cin >> x;
            if(x >= 0) {
                pos[x]++;
                if(pos[x] > n/2) {
                    flag = 1;
                    ans = x;
                }
            }
            else {
                neg[-x]++;
                if(neg[-x] > n/2) {
                    flag = 1;
                    ans = x;
                }
            }
        }
        if(flag == 1)
            cout << "YES " << ans << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}