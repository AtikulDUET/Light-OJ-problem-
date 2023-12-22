#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    map<int,int>::iterator it,it1;
    int t,n,value,cas = 1,sum,temp;
    cin>>t;
    while(t--){
        cin>>n;
        sum = 0, mp.clear();
        for(int i=0;i<n;i++){
            cin>>value;
            temp = value*-1;
            it = mp.find(value);
            it1 = mp.find(temp);


             if(it==mp.end()&&it1!=mp.end()){
                mp[temp] = value;
            }

            else{
                mp[value] = value;
            }
        }
        for(it=mp.begin();it!=mp.end();it++){
            sum += (it->second);
        }
        cout<<"Case "<<cas++<<": "<<sum<<endl;
    }
    return 0;
}

