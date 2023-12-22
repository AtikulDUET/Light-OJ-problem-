#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1,x1,y1,x2,y2,m,n1,n2;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        cout<<"Case "<<cas++<<":"<<endl;
        for(int i=0;i<m;i++){
            cin>>n1>>n2;
            if( (n1>=x1 && n1<=x2) &&( n2>=y1 && n2<=y2) )
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}

