
/*
2015-01-16 11:34
practice
JAN 15
*/
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long int ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define RDARR(a,n) FOR(i,n) cin>>a[i];
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back

void solve(){

	string s;
	cin>>s;
	int days=0,maxlength=0,length;
	FOR(i,s.length()){
		if(s[i]=='.')
		{
			length=0;
			while(s[i]=='.'){
				i++;
				length++;
			}
			if(length>maxlength)
			{
				days++;
				maxlength=length;
			}
		}
	}
	cout<<days<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
