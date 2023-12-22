#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,t,ans,cas=1,st,ed,n1,n2;
    cin>>t;
    while(t--){
        cin>>st>>ed;
        st = st-1;
        n1 = st/3;
        n2 = ed/3;
        n1 = n1*2, n2 = n2*2;
        //cout<<"n1: "<<n1<<" n2: "<<n2<<endl;
        if(st%3==2) n1++;
        if(ed%3==2) n2++;
        //cout<<"n1: "<<n1<<" n2: "<<n2<<endl;

        ans = n2 - n1;
        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }
    return 0;
}
