#include <iostream>
using namespace std;
#define ll long long

int main()
{
	ll n;
	ll sum=0;
	ll count=0;
	int rem;
	cin >> n;
	while(sum!=1 && sum!=2 && sum!=3 && sum!=4 && sum!=5 && sum!= 6 && sum!=8 && sum!=9) {
		sum=0;
		while(n!=0) {
			rem=n%10;
			sum=sum+(rem*rem);
			n=n/10;
		}
		n=sum;
		count++;
	}
	if(sum==1)
		cout << count << endl;
	else
		cout << -1 << endl;
	
	return 0;
}
