#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int a1=a;	
int sbB=0,sbA=0;
while(b>0){
	if(b%2==1) sbB++;
	b/=2;
}
while(a>0){
	if(a%2==1) sbA++;
	a/=2;
}
//cout<<sbB<<endl;
int c=sbB;
string s="";
while(a1>0 && c>0){
if(a1%2==1){
	if(sbA>sbB){
		s+='0';
		sbA--;
	}
	else{
		s+='1';
		c--;
	}
}
else{
	s+='0';
}
a1/=2;
}
reverse(s.begin(),s.end());
int ans=0;
c=0;
for(int i=s.size()-1;i>=0;i--){
	ans+=((s[i]-'0')*(pow(2,c)));
	c++;
}
cout<<ans<<endl;

}