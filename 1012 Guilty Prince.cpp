#include<bits/stdc++.h>
#define M 22
#define ll long long int
#define pii pair<int,int>
using namespace std;
char Grid[M][M];
int vis[M][M],cnt,W,H;
char ch;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y){
    vis[x][y] = 1;
   // cout<<"x: "<<x<<" "<<y<<" "<<Grid[x][y]<<endl;
    cnt++;
    for(int i=0;i<4;i++){
        int xx = x + dx[i], yy = y + dy[i];
        ch = Grid[xx][yy];
        if(xx<0 || xx>=W || yy<0 || yy>=H) continue;
        if(ch=='#') continue;
        else{
            if(vis[xx][yy]==0){
                dfs(xx,yy);
            }
        }
    }

}


int main()
{

    int t,cas=1,sx,sy;
    cin>>t;
    while(t--){
        memset(vis,0,sizeof(vis));
        cnt = 0;
        cin>>H>>W;
        for(int i=0;i<W;i++){
            for(int j=0;j<H;j++){
                cin>>ch;
                if(ch=='@'){ sx = i, sy = j; }

                Grid[i][j] = ch;
            }
        }

        dfs(sx,sy);
        cout<<"Case "<<cas++<<": "<<cnt<<endl;

    }
    return 0;
}

