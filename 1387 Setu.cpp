#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1,donate,value,m;
    string str;
    cin>>t;
    while(t--){
            cout<<"Case "<<cas++<<":"<<endl;
            cin>>m;
        donate = 0;
    for(int i=0;i<m;i++){
        cin>>str;
        if(str=="donate"){
            cin>>value;
            donate += value;
        }
        if(str=="report")
            cout<<donate<<endl;
    }
    }
    return 0;
}

