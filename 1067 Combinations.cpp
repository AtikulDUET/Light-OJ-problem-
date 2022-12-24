#include<bits/stdc++.h>
#define LIM 1000000
#define ll long long int
#define Mod 1000003
using namespace std;

ll dp[LIM];
void Fun(){
    ll temp = 1;
    for(int i=1;i<=LIM;i++){
        temp*=i;
        if(temp>=Mod)
            temp %= Mod;
        dp[i] = temp;
    }
}

ll Modular(ll a,ll b,ll M){
    if(b==0)
        return 1;
    ll x = Modular(a,b/2,M);
    x = (x*x)%M;
    if(b&1)
        x = (x*a)%M;
    return x;
}

int main()
{
    int t,cas=1;
    ll n,k,r,N,R,M,ans;
    Fun();
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k==0){
            cout<<"Case "<<cas++<<": "<<1<<endl;
            continue;
        }
        else if(k==1){
            cout<<"Case "<<cas++<<": "<<n<<endl;
            continue;
        }
        N = dp[n];
        R = dp[k];
        M = dp[n-k];

        R = Modular(R,Mod-2,Mod);
        M = Modular(M,Mod-2,Mod);

        ans = ( (N%Mod)*(R%Mod)*(M%Mod))%Mod;
        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }
    return 0;
}

