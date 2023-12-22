#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1,width,height,len,val,m,Max,Min;
    string str;
    map<int,string>mp;
    cin>>t;
    while(t--){
            cin>>m;
            Max = INT_MIN,Min = INT_MAX;
        mp.clear();
        for(int i=0;i<m;i++){
        cin>>str;
        scanf("%d %d %d",&len,&width,&height);
        val = len*width*height;
        mp[val] = str;
        if(val<Min)
            Min = val;
        if(val>Max)
            Max = val;
        }
        if(Max==Min)
            cout<<"Case "<<cas++<<": no thief"<<endl;
        else
            cout<<"Case "<<cas++<<": "<<mp[Max]<<" took chocolate from "<<mp[Min]<<endl;

    }
    return 0;
}

