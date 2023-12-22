#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t,n,L,R,st,ed,q,dis1,dis2,cas=1;
    vector<int>vec(100005);
    vector<int>::iterator it1,it2;
    cin>>t;
    while(t--){
            cout<<"Case "<<cas++<<":"<<endl;
        cin>>n>>q;
        for(int i=0;i<n;i++)
            cin>>vec[i];
        vec[n] = 1000000000;
        n+=1;

        while(q--){
            cin>>st>>ed;
            it1 = lower_bound(vec.begin(),vec.begin()+n,st);
            it2 = upper_bound(vec.begin(),vec.begin()+n,ed);
            //cout<<"L: "<<*it1<<"  R: "<<*it2;
            dis1 = distance(vec.begin(),it1);
            dis2 = distance(vec.begin(),it2);
            dis2-=1;
           // cout<<"  dis1: "<<dis1<<"  dis2: "<<dis2<<endl;
           cout<<(dis2-dis1+1)<<endl;
        }
        vec.clear();
    }
    return 0;
}

