#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,cnt,cas=1;
    cin>>t;
    while(t--){
            cnt = 0;
        cin>>n;
        while(n!=0){
           if(n%2==1)
            cnt++;
            n/=2;
        }
        if(cnt%2==0)
            cout<<"Case "<<cas++<<": even"<<endl;
        else
            cout<<"Case "<<cas++<<": odd"<<endl;
    }
    return 0;
}

