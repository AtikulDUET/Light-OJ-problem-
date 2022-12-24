#include<bits/stdc++.h>
#define Gray 1
#define White 0
#define Black 2
#define M 22
#define ll long long int
#define pii pair<int,int>
using namespace std;

char Grid[M][M];
int dis[M][M],vis[M][M];
int node,edge,str,stc,ans;

int dx[] = {-1,0,+1,0};
int dy[] ={0,1,0,-1};

void bfs(int str,int stc){
    memset(vis,0,sizeof(vis));

    queue<pii>q;
    q.push({str,stc});
    dis[str][stc] = 0;
    vis[str][stc] = Gray;
    while(!q.empty()){
        pii temp = q.front();
        q.pop();
        int xx = temp.first, yy = temp.second;
       // cout<<"New char: "<<xx<<"  "<<yy<<"  char: "<<Grid[xx][yy]<<endl;
        for(int i=0;i<4;i++){
            int x = xx + dx[i], y = yy + dy[i];
            char c = Grid[x][y];
            if(c=='m' || c=='#'){
                vis[x][y] = Black;
                continue;
            }
            else if(x<0 || x>=node || y<0 || y>=edge)
                continue;
            else{
          //  cout<<"temp: x: "<<x<<"  y: "<<y<<"  "<<Grid[x][y]<<" vis: "<<vis[x][y]<<endl;

                if(vis[x][y]==White){
                   // cout<<"New push: "<<c<<" "<<x<<" "<<y<<endl;
                    q.push({x,y});
                    dis[x][y] = dis[xx][yy] + 1;
                    if(c=='a'||c=='b'||c=='c'){
                        //cout<<c<<"  Our Distance: "<<dis[x][y]<<endl;
                        ans = max(ans,dis[x][y]);
                    }
                }
            }

            vis[x][y] = Gray;

        }
        vis[xx][yy] = Black;
    }


}


int main()
{
    int t,cas=1;
    cin>>t;
    while(t--){
    cin>>node>>edge;
    memset(dis,0,sizeof(0));
    memset(vis,0,sizeof(0));

    for(int i=0;i<node;i++){
        for(int j=0;j<edge;j++){
            cin>>Grid[i][j];
            if(Grid[i][j]=='h')
                str = i, stc = j;
        }
    }

  //  cout<<"House: "<<str<<"  "<<stc<<endl;
    ans = 0;

//    cout<<"Output: "<<endl;
//    for(int i=0;i<node;i++){
//        for(int j=0;j<edge;j++)
//            cout<<Grid[i][j];
//        cout<<endl;
//    }


    bfs(str,stc);
    cout<<"Case "<<cas++<<": "<<ans<<endl;
    }
    return 0;
}
