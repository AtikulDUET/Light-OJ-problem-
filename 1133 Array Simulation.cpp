#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,value,D,cas = 1;
    char ch;
    vector<int>vec;
    cin>>t;
    while(t--){
        vec.clear();
        cin>>n>>m;
        for(int i=0;i<n;i++){
           cin>>value;
           vec.push_back(value);
        }
        for(int i=0;i<m;i++){
            cin>>ch;
            if(ch=='S'){
                cin>>D;
                for(int i=0;i<vec.size();i++)
                    vec[i]+=D;
            }
            if(ch=='R')
                reverse(vec.begin(),vec.end());
            if(ch=='M'){
                cin>>D;
                for(int i=0;i<vec.size();i++)
                    vec[i]*=D;
            }
            if(ch=='D'){
                cin>>D;
                for(int i=0;i<vec.size();i++)
                    vec[i] /= D;
            }
            if(ch=='P'){
                int x,y;
                cin>>x>>y;
                swap(vec[x],vec[y]);
            }
        }
        cout<<"Case "<<cas++<<":"<<endl;
        for(int i=0;i<vec.size();i++){
            if(i!=0) cout<<" ";
            cout<<vec[i];
        }
        cout<<endl;
    }
    return 0;
}

