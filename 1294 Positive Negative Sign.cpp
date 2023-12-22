#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,term,sum,cas=1;
    cin>>t;
    while(t--){
        cin>>n>>m;
        sum = m*m;
       // cout<<"sum: "<<sum<<endl;
        term = n/(m*2);
       // cout<<"term: "<<term<<endl;
        cout<<"Case "<<cas++<<": "<<term*sum<<endl;
    }
    return 0;
}

