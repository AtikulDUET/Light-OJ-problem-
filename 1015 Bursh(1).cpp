#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1,n,total,value;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>n;
        total = 0;
        for(int i=0;i<n;i++){
            cin>>value;
            if(value>0)
                total += value;
        }
        cout<<"Case "<<cas++<<": "<<total<<endl;
    }
    return 0;
}

