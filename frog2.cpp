//https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
ll n;cin>>n; ll k;cin>>k;
std::vector<ll> v(n);
for(auto i=0;i<n;i++) 
cin>>v[i];
vector<ll>dp(n+1,1e9+7);
dp[0]=0;
dp[1]=abs(v[0]-v[1]);        
for(auto i=2;i<n;i++)
{ for(auto j=1;j<k+1;j++)
    {if(i-j>=0)
    {dp[i]=min(abs(v[i-j]-v[i])+dp[i-j],dp[i]);}}
}
cout<<dp[n-1]<<endl;
return 0;
}
