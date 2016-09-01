#include <iostream>
#include <string>
using namespace std;

int GCD(int a, int b) {
    if(b == 0)
        return a;
    else
        return GCD(b, a%b);
}

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int a;
        string b1;
        cin >> a >> b1;
        int b = 0;
        int size = b1.size();
        int i;
        if(a == 0)
            cout << b1 << endl;
        else {
            for(i = 0; i<size; i++) {
                b = (b*10 + (b1[i] - '0')) % a;
            }
            cout << GCD(a, b) << endl;
        }
    }
    return 0;
}