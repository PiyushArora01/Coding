#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int m = n;
        int flag = 1;
        int x = 0;
        while(m>0) {
            x = m%10;
            if(x != 0) {
                if(n%x != 0) {
                    flag = 0;
                    break;
                }
            }
            m = m/10;
        }
        if(flag == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
