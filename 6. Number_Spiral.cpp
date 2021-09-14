/*

Problem Link: https://cses.fi/problemset/task/1071

*/

#include<bits/stdc++.h>   
using namespace std ; 

#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		if(y>x){
			ll ans;
			if(y%2!=0)
				ans = (y*y)-x+1;
			else
				ans = ((y-1)*(y-1))+x;
			cout<<ans<<"\n";
		}
		else{
			ll ans;
			if(x%2!=0)
				ans = ((x-1)*(x-1))+y;
			else
				ans = (x*x)-y+1;
			cout<<ans<<"\n";
		}
		
	}
	return 0;
}
