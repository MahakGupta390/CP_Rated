//CF:-01 Game
//game lasts until string contains two different adjacent characters 
//wrong intution :-check number of substrings with different adjacent characters and if its odd then first player wins else second player wins
//correct intution:- realisation that until both 1 and 0 are there it is possible to find
//different adjacent characters and remove them. so game lasts until either 1 or 0 is finished.
// i.e. min(count of 0,count of 1) determines number of moves possible
// if min is odd first player wins else second player wins.(this is according to question)
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int cnt_0=0,cnt_1=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0') cnt_0++;
	        if(s[i]=='1') cnt_1++;
	    }
	    int ans=min(cnt_0,cnt_1);
	    if(ans%2!=0) cout<<"DA"<<endl;
	    else cout<<"NET"<<endl;
	  
	}

}