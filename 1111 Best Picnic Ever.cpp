#include<bits/stdc++.h>
#define S 103
#define White 0
#define Gray 1
#define Black 2
#define ll long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;

int n,value,t,N,M,K,ans,cas=1;
int cnt[10004],vis[10004];
vector<int>Adj[10004],vec,v1;
map<int,int>mp;

void dfs(int u){
    vis[u] = Gray;
    for(int i=0;i<Adj[u].size();i++){
        int v = Adj[u][i];
        if(vis[v]==0){
            dfs(v);
        }
    }
    cnt[u]++;
    vis[u] = Black;
}


int main()
{
    cin>>t;
    while(t--){
        cin>>K>>N>>M;
        for(int i=0;i<=N;i++)
            Adj[i].clear();
        v1.clear();
        memset(cnt,0,sizeof(cnt));

        for(int i=0;i<K;i++){
            cin>>value;
            v1.push_back(value);
        }

        for(int i=0;i<M;i++){
            int u,v;
            cin>>u>>v;
            Adj[u].push_back(v);
        }

        for(int i=0;i<K;i++){
            value = v1[i];
            memset(vis,0,sizeof(vis));
            dfs(value);
        }
       // cout<<"output: "<<endl;
        ans = 0;
        for(int i=1;i<=N;i++){
            if(cnt[i]==K) ans++;
            //cout<<"node: "<<i<<"  cnt: "<<cnt[i]<<endl;
        }

        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }


    return 0;
}

