#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--) {
		string val, pal;
		cin >> val;
		pal = val;
		int inc = val.size()/2;
		int dec = inc;
		if(val.size()%2 == 0)
			dec--;
		int i, j;
		for(i = inc, j = dec; i<val.size() && j>=0; i++, j--) {
			pal[i] = pal[j];
		}
		while(pal.size() <= val.size() && pal<=val) {
			i = inc, j = dec;
			while((pal[j] - '0' == 9) && j >= 0 && i<pal.size()) {
				pal[i] = pal[j] = '0';
				i++;
				j--;
			}
			if(j < 0) {
				pal = '1' + pal;
				int x = pal[pal.size() - 1] - '0';
				x++;
				pal[pal.size() - 1] = x + '0';
			} else {
				int x = pal[j] - '0';
				x++;
				pal[i] = pal[j] = x + '0';
			}
		}
		cout << pal << endl;
	}
	return 0;
}
