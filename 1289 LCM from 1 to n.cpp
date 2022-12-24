#include<bits/stdc++.h>
#define ll long long int
#define M 100000050
#define Mod 4294967296
using namespace std;
ll n,value,t,temp,rem,cas=1,curr,ans;
vector<int>prime;
unsigned int cul[5761462];

int Status[M/32+2];
bool Check(int n,int pos){
    return (n &(1<<pos));
}

int Set(int n,int pos){
    n =  (n|(1<<pos));
    return n;
}


void Sieve(){
    prime.push_back(2);

    for(int i=3;i*i<=M;i+=2){
        if(Check(Status[i/32],i%32)==0){
            for(int j=i*i;j<=M;j+=i)
                Status[j/32] = Set(Status[j/32],j%32);
        }
    }
    for(int j=3;j<=M;j+=2){
        if(Check(Status[j/32],j%32)==0) prime.push_back(j);
    }
}


int main()
{
    Sieve();
    int sz = prime.size();


   // cout<<"size: "<<sz<<endl;
    cul[0] = 1;
    int idx = 0;
    /// Cumulative sum
    for(ll i=0;i<sz;i++){
         value = prime[i];
         value = value*cul[idx];
         idx++;
         if(value>=Mod)
            value%=Mod;
         cul[idx] = value;
    }

//    for(int i=0;i<10;i++)
//        cout<<cul[i]<<" ";
//    cout<<endl;

    cin>>t;
    while(t--){
        cin>>n;
        ans = 0;
        auto it = lower_bound(prime.begin(),prime.end(),n);
        int dis = distance(prime.begin(),it);
        if(prime[dis]>n)
            dis-=1;
       // cout<<"Curr value: "<<prime[dis]<<"  curr sum: "<<cul[dis+1]<<endl;
        ans = cul[dis+1];

        for(int i=0;prime[i]*prime[i]<=n;i++){
            value = prime[i];
            while(value*prime[i]<=n){
                 ans*=prime[i];
                value *= prime[i];
            }

            if(ans>=Mod)
                ans%=Mod;
          }
          ans = ans%Mod;

        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }


    return 0;
}

