#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define M 100005
using namespace std;
ll n,value,t,cas=1,k,temp,rem,sum,mask;
vector<ll>ans1,ans2,kk,nw;
unordered_map<int,bool>mp;

void Solution(int idx,vector<ll>vec,vector<ll>v,bool ck){
//    cout<<"current vec: ";
//    for(auto it:v) cout<<it<<" ";
//    cout<<endl;

    if(v.size()>1){
        ll sum = 0;
        sum = accumulate(v.begin(),v.end(),sum);
      //  cout<<"sum: "<<sum<<endl;
       if(ck==0) ans1.push_back(sum);
       else ans2.push_back(sum);
    }

    if(idx>=vec.size())
        return;

    if(idx<vec.size()){
        v.push_back(vec[idx]);
        v.push_back(vec[idx]);
        Solution(idx+1,vec,v,ck);
        v.pop_back();
        v.pop_back();
    }

    if(idx<vec.size()){
        v.push_back(vec[idx]);
        Solution(idx+1,vec,v,ck);
        v.pop_back();
    }

    if(idx<vec.size()){
        Solution(idx+1,vec,v,ck);
    }
}


int main()
{
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<ll>vec;
        vec.clear(), mp.clear(),ans1.clear(),ans2.clear();

        for(int i=0;i<n;i++){
            cin>>value;
            vec.push_back(value);
        }

        int idx = 0;
        for(;idx<n/2;idx++){
            ans1.push_back(vec[idx]);
        }

        kk.clear(),nw.clear();
        nw = ans1;
        Solution(0,nw,kk,0);

        for(;idx<n;idx++){
            ans2.push_back(vec[idx]);
        }

        kk.clear(),nw.clear();
        nw = ans2;
        Solution(0,nw,kk,1);

//        cout<<"ans1: ";
//        for(auto it:ans1) cout<<it<<" ";
//        cout<<endl;
//
//        cout<<"ans2: ";
        for(auto it:ans2){
              //  cout<<it<<" ";
            mp[it] = 1;
        }
       // cout<<endl;




        bool ck = 0;
        ans1.push_back(0);
        for(int i=0;i<ans1.size();i++){
             value = k - ans1[i];
             if( (value>=0 && mp[value]) || value==0){
                ck = 1;
                break;
             }
        }
        if(ck==1)
            printf("Case %d: Yes\n",cas++);
           // cout<<"Case "<<cas++<<": Yes"<<endl;
        else
            printf("Case %d: No\n",cas++);
           // cout<<"Case "<<cas++<<": No"<<endl;

    }
    return 0;
}

