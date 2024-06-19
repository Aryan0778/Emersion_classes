//ARYAN SAXENA 
#include <bits/stdc++.h>
using namespace std;
           
#define ll                    long long
#define ld                    long double
#define pb                    push_back
#define lb                    lower_bound
#define ub                    upper_bound
#define ff                    first
#define ss                    second
#define fast_io               ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inpv(v)               for(auto &x: v) cin>>x;
#define fr(i,k,n)             for (ll i=k;i<n;++i)
#define all(str)              str.begin(), str.end()
#define endl				  '\n'
/*-------------------------------------------------------------------------------*/
/* KEEP IT SIMPLE */ 
ll sum(ll n){
	return n*(n+1)/2;
}

void solve(){
ll n,a,b;
cin>>n>>a>>b;
b++;
ll s=1,e=n,ans=0;
while(s<=e){
	ll m=s+(e-s)/2;
	if(b-m>a){
		ans=m+1;
		s=m+1;
	}
	else{
		e=m-1;
	}
}
ll m=0;
cout<<ans<<endl;
m+=(n-ans)*a;
m+=(sum(b)-sum(ans));
cout<<m<<endl;
}
 
 
int main(){
 
fast_io;
 
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
 
ll q=1;
cin>>q;
for(ll i=0;i<q;i++){
    solve();
}
    return 0;
}