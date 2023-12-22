#include<bits/stdc++.h>
#define ll long long int
#define M 505
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
using namespace std;
int vis[M],cost[M];
int t,node,edge,cas=1,src;
vector<int>Adj[M],W[M];
void Dijkstra(int x){
    for(int i=0;i<=node;i++){
        cost[i] = 0;
        vis[i] = 0;
    }

    queue<int>q;
    q.push(x);
    vis[src] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0;i<Adj[u].size();i++){
            int v = Adj[u][i];
            int w = W[u][i];
            if(vis[v]==0){
                cost[v] = max(cost[u],w);
                q.push(v);
                vis[v] = 1;
            }
            else{
                int temp = max(cost[u],w);
                if(cost[v] > temp){
                    cost[v] = temp;
                    q.push(v);
                }
            }
        }
    }

}


int main()
{
    cin>>t;
    while(t--){
        cin>>node>>edge;
        cout<<"Case "<<cas++<<":"<<endl;

        for(int i=0;i<=node;i++){ Adj[i].clear(),W[i].clear(); }

        for(int i=0;i<edge;i++){
            int u,v,w;
            cin>>u>>v>>w;
            Adj[u].push_back(v);
            Adj[v].push_back(u);
            W[u].push_back(w);
            W[v].push_back(w);
        }

        cin>>src;
        Dijkstra(src);
        for(int i=0;i<node;i++){
            if(i==src) cout<<0<<endl;
            else if(cost[i]==0) cout<<"Impossible"<<endl;
            else cout<<cost[i]<<endl;
            //cout<<"Node "<<i+1<<"  cost: "<<cost[i]<<endl;
        }

    }

    return 0;
}
