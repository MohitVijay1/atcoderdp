//https://atcoder.jp/contests/dp/tasks/dp_c

void solve()
{
    ll n;cin>>n;
    ll v[n][3];
   
    loop(i,0,n)
    {
        ll a;ll b;ll c;
        cin>>a;cin>>b;cin>>c;
        v[i][0]=a;
        v[i][1]=b;
        v[i][2]=c;
    }
    
    vll a(n,0);vll b(n,0);vll c(n,0);
    a[0]=v[0][0];
    b[0]=v[0][1];
    c[0]=v[0][2];
    loop(i,1,n)
    {
        a[i]=max(b[i-1],c[i-1])+v[i][0];
        b[i]=max(a[i-1],c[i-1])+v[i][1];
        c[i]=max(a[i-1],b[i-1])+v[i][2];

    }
    cout<<max(a[n-1],max(b[n-1],c[n-1]))<<endl;
}
