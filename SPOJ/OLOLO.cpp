#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    if(n!=0) {
        scanf("%d", &x);
        n--;
    }
    while(n--) {
        int y;
        scanf("%d", &y);
        x = x^y;
    }
    printf("%d\n", x);
}