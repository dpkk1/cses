/*

Problem Link: https://cses.fi/problemset/task/1068

*/

#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
	long int n; 
	cin>>n;
	while(true){
		cout<<n<<" ";
		if(n==1)
		break;
		if(n%2==0){
			n=n/2;
			
		}
		else{
			n=(n*3)+1;
			
		}
	}	
	return 0; 
} 
