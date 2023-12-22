#include<bits/stdc++.h>
#define ll long long int
using namespace std;

map<int,ll>mp;
map<int,ll>::iterator it;
vector<int>vec;


int main()
{
    int t,cas=1;
    ll n,temp=1;
    mp[0] = 1;
    for(int i=1; i<=20; i++)
    {
        temp*=i;
        mp[i] = temp;
    }

    cin>>t;
    while(t--)
    {

        cin>>n;

//    for(it=mp.begin();it!=mp.end();it++)
//        cout<<it->first<<'\t'<<it->second<<endl;
        vec.clear();
        for(int i=20; i>=0; i--)
        {
            temp = mp[i];
            if(n>=temp)
            {
                vec.push_back(i);
                //cout<<"i: "<<i<<"  temp: "<<temp<<endl;
                n-=temp;
            }
        }
        sort(vec.begin(),vec.end());

        cout<<"Case "<<cas++<<": ";

        if(n!=0)
            cout<<"impossible"<<endl;
        else{

        for(int i=0;i<vec.size();i++){

            cout<<vec[i]<<"!";
            if(i != (vec.size()-1))
                cout<<"+";
        }
        cout<<endl;
        }

    }

    return 0;
}

