#include<bits/stdc++.h>
#define ll long long int
#define Mod 1000000007
#define M 1000006
#define vi vector<int>
#define pii pair<double,double>
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
#define endl "\n"
using namespace std;
int n,value,t,k,cas=1,temp;
vector<pii>pnt(5);

/**
Every time calculate the AC distance and BD distance
and check their distance

*/

double DisCal(pii p1,pii p2){
    double tmp = (p1.ff-p2.ff)*(p1.ff-p2.ff) + (p1.ss-p2.ss)*(p1.ss-p2.ss);
    return tmp;
}

void Solve(){
    pii A,B,C,D,a,b,c,d,mid1,mid2;
    double dis_ac,dis_bd,res;
    pnt.clear();
    cin>>pnt[0].ff>>pnt[0].ss;
    cin>>pnt[1].ff>>pnt[1].ss;
    cin>>pnt[2].ff>>pnt[2].ss;
    cin>>pnt[3].ff>>pnt[3].ss;

    int cnt = 0;

    while(cnt<=100){

        a.ff = (2*pnt[0].ff + pnt[1].ff)/3; /// mov forward point A
        a.ss = (2*pnt[0].ss + pnt[1].ss)/3;

        b.ff = (pnt[0].ff + 2*pnt[1].ff)/3;
        b.ss = (pnt[0].ss + 2*pnt[1].ss)/3;  /// mov backword point B

        c.ff = (2*pnt[2].ff + pnt[3].ff)/3;
        c.ss = (2*pnt[2].ss + pnt[3].ss)/3; /// Mov backword point C

        d.ff = (pnt[2].ff + 2*pnt[3].ff)/3; /// MOv forward point D
        d.ss = (pnt[2].ss + 2*pnt[3].ss)/3;

        dis_ac = DisCal(a,c);
        dis_bd = DisCal(b,d);

        if(dis_ac > dis_bd){
            pnt[0] = a;
            pnt[2] = c;
        }
        else{
            pnt[1]= b;
            pnt[3] = d;
        }

        cnt++;
    }
    res = (dis_ac+dis_bd)/2.0;
    res = sqrt(res);
    //cout<<"ulitmate res: "<<res<<endl;
   printf("Case %d: %.7lf\n",cas++,res);

}

int main()
{
    //Solve();
    cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}

