#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int a, b;
        cin >> a >> b;
        int count = 0;
        if(a <= 0 && b >= 0)
            count++;
        if(a <= 1 && b >= 1)
            count++;
        if(a <= 2 && b >= 2)
            count++;
        if(a <= 3 && b >= 3)
            count++;
        cout << count << endl;
    }
}