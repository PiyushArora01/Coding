#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

void P(int n)
{
    int val = n;
    if(n <= 3){
        if(n == 3)
            cout << "2+2(0)";
        else if(n == 2)
            cout << 2;
        else if(n==1)
            cout << "2(0)";
        return;
    }
    int i=0;
    while(n > 0){
        i++;
        n = n/2;
    }
    int a = pow(2,i-1);
    cout << "2(";
    P(i-1);
    cout << ")";
    if(val-a!=0) {
        cout << "+";
        val = val-a;
        P(val);
    }
}

int main()
{
    int t=7;
    while(t--) {
        int n;
        cin>>n;
        cout << n << "=";
        P(n);
        cout<<endl;
    }
    return 0;
}
