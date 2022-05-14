#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i;
	string s;
	cin>>s;
	for(i=0;s[i];i++)
	{
	    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
	    {
	        cout<<"YES";
	        break;
	    }
	}
	if(i==s.length())
	{
	    cout<<"NO";
	}
	return 0;
}
