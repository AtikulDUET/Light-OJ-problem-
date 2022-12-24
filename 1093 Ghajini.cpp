
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cas=1,n,d,value,Max,Min,ans,top;
    set<int>s;
    vector<int>vec;
    map<int,int>mp;
    cin>>t;
    while(t--){
        cin>>n>>d;
        vec.clear(), ans =0;
        s.clear(), mp.clear();
        for(int i=0;i<n;i++){
            cin>>value;
            vec.push_back(value);

        }
        Max = vec[0], Min = vec[0];

        for(int i=0;i<d;i++){
            mp[vec[i]]+=1;
                s.insert(vec[i]);
            if(vec[i]>Max)
                Max = vec[i];
            if(vec[i]<Min)
                Min = vec[i];
        }
        ans = max(ans,(Max-Min));

        for(int i=d;i<n;i++){
                s.insert(vec[i]);
                mp[vec[i]]+=1;
            value = vec[i-d];
           // cout<<"value: "<<value<<" ";
            mp[value]-=1;
            if(mp[value]==0)
                s.erase(value);
    //            cout<<"\nChecking: ";
    //        for(auto it = s.begin();it!=s.end();it++)
    //            cout<<*it<<"  ";
    //        cout<<endl;
            auto it = s.end();
            it--;
            top = *it;
            auto it1 = s.begin();
           // cout<<"top: "<<top<<"  below: "<<*it1<<endl;
            ans = max(ans,(*it-*it1));
        }
        cout<<"Case "<<cas++<<": "<<ans<<endl;

    }

    return 0;
}
