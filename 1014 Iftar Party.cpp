#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<ll>li;

void Divisor(ll n){
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            li.push_back(i);
            if(i*i!=n)
                li.push_back(n/i);
        }
    }
}

int main()
{
    ll P,L,Q;
    int cas = 1,t;

    cin>>t;
    while(t--){
        cin>>P>>L;
        Q = P - L;
        if(L>=Q)
            cout<<"Case "<<cas++<<": impossible"<<endl;
        else{
                li.clear();
            Divisor(Q);
            sort(li.begin(),li.end());
            cout<<"Case "<<cas++<<":";
            for(int i=0;i<li.size();i++){
                if(li[i]>L)
                    cout<<" "<<li[i];
            }
            cout<<endl;
        }
    }
    return 0;
}

