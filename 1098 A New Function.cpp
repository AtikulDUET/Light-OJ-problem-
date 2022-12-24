#include<bits/stdc++.h>
#define ll unsigned long long int
#define pii pair<int,int>
#define M 1000000007
using namespace std;
ll n,value,t,st,ed,ans,sum,temp,n1,n2,cas=1;

int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        st=2;
        ans = 0;
        sum = 0;
        while(st<=n){
            temp = n/st;
            ed = n/temp;
            //cout<<"temp:  "<<temp<<" st: "<<st<<"  ed: "<<ed;
            n1 = (ed*(ed+1))/2;

            n2 = (st*(st-1))/2;
            if(temp>1){
             sum = (n1-n2);
             //cout<<" n1:  "<<n1<<"  n2: "<<n2<<" ";
             temp-=1;
             ans= ans + (sum*temp);
            }
           //cout<<"   sum: " <<sum<<"   ans: "<<ans<<endl;
            st = ed + 1;

        }

        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }


    return 0;
}

