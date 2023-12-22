#include<bits/stdc++.h>
#define M 210
#define pii pair<int,int>
using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char Grid[M][M];
int vis[M][M],dis[M][M];
int node,edge;
char ch;
queue<pii>q;
bool Check(int x,int y){
    if(x==0 || x==(node-1) || y==0 || y==(edge-1))
        return true;

    return false;
}

int bfs(int sx,int sy){
    dis[sx][sy] = 1;
    //cout<<"source: "<<sx<<" "<<sy<<endl;
    vis[sx][sy] = 1;
    while(!q.empty()){
        pii p = q.front();
        q.pop();

        int x = p.first,  y = p.second;
        char c = Grid[x][y];
        if(c=='J' && Check(x,y))
            return dis[x][y];
        for(int i=0;i<4;i++){
            int xx = x + dx[i], yy = y + dy[i];
            ch = Grid[xx][yy];
            if(xx<0 || xx>=node || yy<0 || yy>=edge) continue;

            dis[xx][yy] = dis[x][y] + 1;
            if(ch=='#' || ch=='F') continue;

            else{
                if(vis[xx][yy]==1){
                    if(ch=='J' && c=='F')
                        Grid[xx][yy] = c;
                    //continue;
                }
                else if(vis[xx][yy]==0){
               // cout<<"x: "<<x<<" y: "<<y<<endl;
                    Grid[xx][yy] = c;
                    q.push({xx,yy});
                    vis[xx][yy] = 1;
                }
            }


        }

    }


    return -1;
}


int main()
{
    int sx,sy,cas=1,t;
   // freopen("aaaa.txt","w",stdout);
    cin>>t;
    while(t--){
        cin>>node>>edge;
        while(!q.empty()) q.pop();


        memset(dis,0,sizeof(dis));
        memset(vis,0,sizeof(vis));
        for(int i=0;i<node;i++){
            for(int j=0;j<edge;j++){
                cin>>ch;
                Grid[i][j] = ch;
                if(ch=='J'){
                        sx = i, sy = j;
                    q.push({i,j});
                }
            }
        }

        for(int i=0;i<node;i++){
            for(int j=0;j<edge;j++){
                ch = Grid[i][j];
                if(ch=='F')
                    q.push({i,j});
            }
        }

        int temp = bfs(sx,sy);
        if(temp==-1)
            cout<<"Case "<<cas++<<": IMPOSSIBLE"<<endl;
        else
            cout<<"Case "<<cas++<<": "<<temp<<endl;

    }

    return 0;
}

