#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;
int n,value,t,cas=1,temp,rem,one,zero;
vector<bool>vec,tt;
map<int,int>mp;

int Calculate(vector<bool>&v){
    int ans = 0,k=0;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==1){
            ans += (1<<k);
        }
        k++;
    }
    return ans;
}

int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        vec.clear();
        tt.clear();
        temp = n;
        one = 0, zero = 0;
        while(temp){
            if(temp&1){
                vec.push_back(1);
                one++;
            }
            else{
                zero++;
                vec.Pb(0);
            }
                temp/=2;
        }

        reverse(vec.begin(),vec.end());
        next_permutation(vec.begin(),vec.end());
//        for(auto v:vec) cout<<v<<" ";
//        cout<<endl;
        temp = Calculate(vec);
        //cout<<"temp: "<<temp<<endl;
        if(temp>n) cout<<"Case "<<cas++<<": "<<temp<<endl;
        else{
            tt.push_back(1);
            one--;
            zero+=1;
            for(int i=1;i<=zero;i++) tt.push_back(0);
            for(int i=1;i<=one;i++) tt.push_back(1);
            temp = Calculate(tt);
            cout<<"Case "<<cas++<<": "<<temp<<endl;

        }
    }
    return 0;
}

