#include<bits/stdc++.h>
#define ll long long int
#define Mod 1000000007
#define M 1006
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define loop for(int i=1;i<=n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define RFOR(i,a,b) for(int i=b;i>=a;i--)
#define SORT(v)  sort(v.begin(), v.end())
#define REV(v)   reverse(v.begin(),v.end())
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);
#define endl "\n"
using namespace std;
int n,m,value,t,k,cas=1,temp,ans;
vector<int>Adj[M];
map<int,int>mp;
set<int>st;
int vis[M],ck=0;
string str;
int A[M],par[M],dis[M];

void bfs(int x){
    queue<int>q;
    q.push(x);
    dis[x] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:Adj[u]){
            if(v==u) continue;
            if(par[u]==v) continue;
            if(par[v]==-1){
                par[v] = u;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
            else{
//                cout<<"Found Cycle at v: "<<v<<" u: "<<u<<" dis[u]: "<<dis[u]<<" dis[v]: "<<dis[v];
//               cout<<" par u: "<<par[u]<<" par[v]: "<<par[v]<<endl;
                ans = min(ans,dis[u]+dis[v]+1);
            }

        }
    }
}


void Solve(){
    cin>>n>>m;
    ans = INT_MAX;
    ck = 0;
    FOR(i,0,n){
        Adj[i].clear();
    }

    FOR(i,1,m){
        int u,v;
        cin>>u>>v;
        Adj[u].pb(v);
        Adj[v].pb(u);
    }
    for(int i=0;i<n;i++){
        FOR(i,0,n){
            vis[i] = 0;
            par[i] = -1;
            dis[i] = M;
        }
        bfs(i);
    }
    cout<<"Case "<<cas++<<": ";
    if(ans==INT_MAX)
        cout<<"impossible"<<endl;
    else cout<<ans<<endl;
}

int main()
{
    //FastRead
    //Solve();
    cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}

