#include<iostream>
using namespace std;

int main()
{
    int n, i=0, ans=1;
    int x14=0, x12=0, x34=0;
    int n1,n2;
    char op;
    cin >> n;

    while(n--) {
        cin >> n1 >> op >> n2;
        if(n1==3)
            x34++;
        else if(n2==2)
            x12++;
        else if(n2==4)
            x14++;
    }

    ans += x34;
    x14 = x14-x34;
    ans += x12/2;
    if(x12 % 2) {
        ans++;
        x14-=2;
    }

    if(x14 > 0) {
        ans += x14/4;
        if(x14 %4 >0) {
            ans++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}