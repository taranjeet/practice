
/*
2015-02-25 12:45
practice
FEB 15
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

	int n;
	cin>>n;
	vector<int>a(n);
	FOR(i,n)
		cin>>a[i];
	sort(a.begin(),a.end());
	FOR(i,n)
	cout<<a[i]<<" ";
	cout<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
