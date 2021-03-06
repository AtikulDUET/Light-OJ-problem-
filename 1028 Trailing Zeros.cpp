#include<bits/stdc++.h>
#define Size 1000007
#define ll long long int
using namespace std;
bool flag[Size+2];
vector<int>prime;
void sieve(){
    prime.push_back(2);
    for(int i=3;i*i<=Size;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=Size;j+=i)
                flag[j]=true;
        }
    }
    for(int i=3;i<=Size;i+=2){
        if(flag[i]==false)
            prime.push_back(i);
    }
}

int Factorize(ll n){
    int cnt,total=1;
    for(ll i=0;prime[i]*prime[i]<=n&&i<prime.size();i++){
        if(n%prime[i]==0){
            cnt = 1;
            while(n%prime[i]==0){
                cnt++;
                n/=prime[i];
            }
            total*=cnt;
        }
    }
    if(n>1){
        total*=2;
    }
    return total;
}
int main()
{
    int t,cas=1;
    ll n;
    sieve();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<"Case "<<cas++<<": "<<Factorize(n)-1<<endl;
    }
    return 0;
}

