#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll coinDP(vector<ll> &coins){
	ll n=coins.size();
	if(n==1)
		return coins[0];
	if(n==2)
		return max(coins[0],coins[1]);
	ll dp[n];
	dp[0]=coins[0];
	dp[1]=max(coins[0],coins[1]);
	for(ll i=2;i<n;i++){
		dp[i]=max(coins[i]+dp[i-2],dp[i-1]);
	}
	return dp[n-1];
}
int main() {
	int t;
	cin>>t;
	for(int t1=1;t1<=t;t1++){
		ll n;
		cin>>n;
		vector<ll> coins(n);
		for(ll i=0;i<n;i++)
			cin>>coins[i];
		cout<<"Case "<<t1<<" "<<coinDP(coins)<<endl;
		
	}
	return 0;
}
