#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    int arr[120];
    while(cin >> s) {
    	if(s.size() == 1 && (s[0] == '1' || s[0] == '0')) 
    		cout << s;
    	else {
    		
		    int size = s.size();
		    int i = 0;
		    for(i = size - 1; i>=0; i--) {
		        arr[i] = s[i] - '0';
		    }
		    //Subtract 1
		    for(i = size - 1; i>=0; i--) {
		        if(arr[i] >= 1) {
		            arr[i]--;
		            break;
		        } else {
		            arr[i] = 9;
		        }
		    }
		    //Multiply 2
		    int carry = 0, b = 0;
		    for(i = size-1; i>=0; i--) {
		        b = arr[i]*2 + carry;
		        arr[i] = b%10;
		        carry = b/10;
		    }
		    if(carry > 0) {
		        for(i = size; i>=1; i--) {
		            arr[i] = arr[i-1];
		        }
		        arr[0] = carry;
		        int j = 0;
		        while(arr[j] == 0) {
		        	j++;
				}
			    for(i =j; i<=size; i++)
			        cout << arr[i];
		    }
		    
		    else {
			    int j = 0;
			    while(arr[j] == 0)
			       	j++;
				for(i = j; i<size; i++)
			        cout << arr[i];
			}
		}
	    cout << endl;
	}
    return 0;
}
