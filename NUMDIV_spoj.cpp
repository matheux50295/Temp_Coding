#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll countDivisors(ll num){
	ll c=0;
	for(ll i=1;i<=sqrt(num);i++){
		if(num%i==0){
			if(num/i!=i)
				c+=2;
			else
				c++;
		}
	}
	return c;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll countDiv=countDivisors(n);
		cout<<countDiv<<endl;
	}
	return 0;
}