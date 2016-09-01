#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n != 0) {
		string s;
		cin >> s;
		size_t size = s.size();
		//cout << s << endl;
		int m = size/n;
		int chk = 1;
		char str[m][n];
		//cout << size << " " << n << " " << m << endl;
		int k = 0;
		for(int i = 0; i<m; i++) {
			for(int j = 0; j<n; j++) {
				if(chk == 1) {
					str[i][j] = s[k++];
					//cout << n << " " << k << endl;
					if(k%n == 0)
						chk = 0;
				}
				else {
					str[i][j] = s[(i+1)*n - j - 1];
					k++;
					//cout << n << " " << k << endl;
					if(k%n == 0)
						chk = 1;
				}
			}
		}
		
		int i, j;
		for(i = 0; i<n; i++) {
			for(j = 0; j<m; j++)
				cout << str[j][i];
//			cout << endl;
		}
		cout << endl;
		cin >> n;
	}
	return 0;
}
