#include<bits/stdc++.h>
#define ll long long   int
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;

ll n,value,t,cas=1,m;
vector<ll>vec;
map<int,int>mp;

bool isValid(ll cap){
    ll cnt = 0,sum=0;
    for(int i=0;i<n;i++){
        if(cnt>m) return false;

        if( (sum+vec[i])<=cap)
            sum+=vec[i];
        else{
            cnt++;
            sum = vec[i];
        }
    }

    if(sum<=cap) cnt++;
    else
        cnt+=2;
   // cout<<"cnt: "<<cnt<<" cap: "<<cap<<" sum: "<<sum<<endl;
    if(cnt>m) return false;
    return true;
}


ll BS(ll value){
    ll ans=0,mid,st=value,ed=1000000000000;

    while(st<=ed){
        mid = (st+ed)/2;
        if(isValid(mid)){
            ans = mid;
            ed = mid -1;
        }
        else
            st = mid + 1;
    }
    return ans;
}

int main()
{
    cin>>t;

    while(t--){
        ll Max = 0;
        cin>>n>>m;
        vec.clear();
        for(int i=0;i<n;i++){
            cin>>value;
            if(value>Max)
                Max = value;
            vec.push_back(value);
        }
       // cout<<isValid(83)<<endl;
        cout<<"Case "<<cas++<<": "<<BS(Max)<<"\n";
    }
    return 0;
}
