#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int xorr=a^b;
int check=xorr^c;
int count=0;
while(check>0){
	if(check%2==1) count++;
	check/=2;
}
cout<<count<<endl;



}