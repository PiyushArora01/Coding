#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    scanf("%de%d", &a, &b);
    while(a != 0) {
        while(b--)
            a *= 10;
        int pow2 = 1;
        while(pow2 <= a)
            pow2 *= 2;
        pow2 /= 2;
        int ans = (a - pow2)*2 + 1;
        cout << ans << endl;
        scanf("%de%d", &a, &b);
    }
    return 0;
}