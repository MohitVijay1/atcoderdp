//https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll n;cin>>n;
std::vector<ll> v(n);
for(auto i=0;i<n;i++)
cin>>v[i];
vector<ll>dp(n+1,0);
dp[0]=0;
dp[1]=abs(v[0]-v[1]);
for(auto i=2;i<n;i++)
{
dp[i]=min(abs(v[i-1]-v[i])+dp[i-1],abs(v[i]-v[i-2])+dp[i-2]);
}
cout<<dp[n-1]<<endl;
return 0;
}
