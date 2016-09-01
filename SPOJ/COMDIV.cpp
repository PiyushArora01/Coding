#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int GCD(int a, int b)
{
    if(a%b == 0)
        return b;
    else
        return GCD(b, a%b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int g;
        if(a > b)
            g = GCD(a, b);
        else
            g = GCD(b, a);
        int i = 1;
        int sqRoot = sqrt(g);
        int count = 0;
        while(i <= sqRoot) {
            if(g % i == 0) {
                count += 2;     //n & g/n
                if(i*i == g)
                    count--;
            }
            i++;
        }
        printf("%d\n", count);
    }
    return 0;
}