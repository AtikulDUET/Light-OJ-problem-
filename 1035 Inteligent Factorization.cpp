#include<bits/stdc++.h>
#define Size 100
using namespace std;
vector<int>prime;
bool flag[Size+1];
void sieve(){
    prime.push_back(2);
    for(int i=3;i*i<=Size;i+=2){
        if(flag[i]==false){
            for(int j=i*i;j<=Size;j+=i)
                flag[j] = true;
        }
    }
    for(int i=3;i<=Size;i+=2){
        if(flag[i]==false)
            prime.push_back(i);
    }
}
vector<int>li[100];
void Factorize(int n){
    for(int i=0;prime[i]*prime[i]<=n&&i<prime.size();i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                li[prime[i]].push_back(prime[i]);
            }
        }
    }
    if(n>1){
        li[n].push_back(n);
    }
}
int main()
{
    int t,n,cas=1;
    int ck;
    sieve();
    cin>>t;
    while(t--){
            ck = 0;
    cin>>n;
    for(int i=1;i<=n;i++){
        Factorize(i);
    }
    cout<<"Case "<<cas++<<": "<<n<<" = ";
    for(int i=0;i<100;i++){
        if(li[i].size()>0){
            if(ck!=0){
                cout<<" * ";
            }
            cout<<li[i][0]<<" ("<<li[i].size()<<")";
                ck = 1;
        }
        li[i].clear();
    }
    cout<<endl;

    }
    return 0;
}

