/*

Problem Link: https://cses.fi/problemset/task/1070

*/

#include<bits/stdc++.h>   
using namespace std ; 
 
#define ll long long
 
int main(){
	int n;
	cin>>n;
	int a[n];
	if(n==1)
	 cout<<1;
	else if(n<=3 && n>=2)
	 cout<<"NO SOLUTION";
	else if(n>3){
		for(int i=0; i<n; i++)
		a[i] = i+1;
		if(n%2==0){
			for(int i=0; i<n; i++)
				if(i%2!=0)
				 cout<<a[i]<<" ";
			for(int i=0; i<n; i++)
				if(i%2==0)
				 cout<<a[i]<<" ";
		}
		else{
			for(int i=0; i<n; i++)
				if(i%2==0)
				 cout<<a[i]<<" ";
			for(int i=0; i<n; i++)
				if(i%2!=0)
				 cout<<a[i]<<" ";
		}
	}	
	return 0;
}
