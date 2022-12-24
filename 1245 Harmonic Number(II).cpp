#include<bits/stdc++.h>
#define ll unsigned long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;
ll n,value,t,cas=1,sum,st,ed,temp,rem,diff;
vector<ll>vec;
map<int,int>mp;

int main()
{
    cin>>t;
    while(t--){
        sum = 0;
        st = 1;
        cin>>n;
        for(st=1;st<=n;){
            rem = n/st;
            ed = n/rem;
            diff = (ed-st)+1;
            sum += (diff*rem);
            st = ed+1;
        }

        cout<<"Case "<<cas++<<": "<<sum<<endl;
    }
    return 0;
}

