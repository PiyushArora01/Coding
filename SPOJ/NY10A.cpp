#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int test;
	cin >> test;
	int t;
	for(t = 1; t<=test; t++) {
		int n;
		cin >> n;
		int TTT = 0, TTH = 0, THT = 0, THH = 0, HTT = 0, HTH = 0, HHT = 0, HHH = 0;
		string s;
		cin >> s;
		int j = s.size();
		int i;
		for(i = 0; i<j-2; i++) {
			string x;
			x += s[i];
			x += s[i+1];
			x += s[i+2];
			//cout << x << endl;
			if(x == "TTT")
				TTT++;
			else if(x == "TTH")
				TTH++;
			else if(x == "THT")
				THT++;
			else if(x == "THH")
				THH++;
			else if(x == "HTT")
				HTT++;
			else if(x == "HTH")
				HTH++;
			else if(x == "HHT")
				HHT++;
			else if(x == "HHH")
				HHH++;
		}
		cout << t << " " << TTT << " " << TTH << " " << THT << " " << THH << " " << HTT << " " << HTH << " " << HHT << " " << HHH << endl;
	}
	return 0;
}
