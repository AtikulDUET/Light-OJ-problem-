#include<bits/stdc++.h>
#define ll long long
#define Size 100000
using namespace std;
int main()
{
    int n,w,Y[Size],x,t,cas=1,i;
    cin>>t;
    while(t--){
    cin>>n>>w;
    for(i=0;i<n;i++) cin>>x>>Y[i];
    sort(Y,Y+n);
    ll lo = Y[0], hi = Y[0] + w,i=0,mov=1;
    while(i<n){
        if(lo<=Y[i] && Y[i]<=hi) i++;
        else{
            mov++;
            lo = Y[i];
            hi = Y[i]+w;
        }
    }
    cout<<"Case "<<cas++<<": "<<mov<<endl;
    }
    return 0;
}

