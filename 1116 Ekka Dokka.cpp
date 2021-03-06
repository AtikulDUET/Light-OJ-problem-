#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t,cas=1;
    ll w,M,N;
    cin>>t;
    while(t--){
        cin>>w;
        if(w&1)
            cout<<"Case "<<cas++<<": Impossible"<<endl;
        else{
        for(ll i=2;i<=w/2;i+=2){
            if(w%i==0){
                M = i;
                N = w/i;
                if(N&1==1){
                     cout<<"Case "<<cas++<<": "<<N<<" "<<M<<endl;
                    break;
                }
            }
        }
        }


    }
    return 0;
}

