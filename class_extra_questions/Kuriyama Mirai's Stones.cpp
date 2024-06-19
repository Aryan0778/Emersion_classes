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


void solve(){
ll n;
cin>>n;
vector<ll>v(n),vs(n);
inpv(v);
vs=v;
sort(all(vs));
vector<ll>pre(n,0),pree(n,0);
pre[0]=vs[0];
pree[0]=v[0];
for(ll i=1;i<n;i++){
	pree[i]=pree[i-1]+v[i];
	pre[i]=pre[i-1]+vs[i];
}
ll m;
cin>>m;
//for(auto it:pre) cout<<it<<" ";
while(m--){
ll t,a,b;
cin>>t>>a>>b;
if(t==2){
	ll k1,k2=0;
	k1=pre[b-1];
	if(a>1) k2=pre[a-2];
	cout<<k1-k2<<endl;
}
else{
	ll k1=pree[b-1],k2=0;
	k1=pree[b-1];
	if(a>1) k2=pree[a-2];
	cout<<k1-k2<<endl;
}
}


 
}
 
 
int main(){
 
fast_io;
 
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
 
ll q=1;
//cin>>q;
for(ll i=0;i<q;i++){
    solve();
}
    return 0;
}