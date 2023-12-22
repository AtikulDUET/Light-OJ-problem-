#include<bits/stdc++.h>
#define Mod 10000007
#define LIM 10000
#define ll long long int
using namespace std;
ll dp[LIM+2];

ll a,b,c,d,e,f;

ll Fun(ll n){
    if(n<0) return 0;
    if(dp[n]!=-1)
        return dp[n];
    if(n==0) return a;
    if(n==1) return b;
    if(n==2) return c;
    if(n==3)  return d;
    if(n==4) return e;
    if(n==5) return f;
    dp[n] = Fun(n-1) + Fun(n-2)+Fun(n-3) + Fun(n-4) + Fun(n-5)+ Fun(n-6);
    if(dp[n]>=Mod)
        dp[n] = dp[n]%Mod;
    return dp[n];
}

int main()
{
    int t,cas=1,n;
   // freopen("a100.txt","w",stdout);
    cin>>t;
    while(t--){
            memset(dp,-1,sizeof(dp));
        cin>>a>>b>>c>>d>>e>>f>>n;
        cout<<"Case "<<cas++<<": "<<Fun(n)%Mod<<endl;
    }
    return 0;
}

