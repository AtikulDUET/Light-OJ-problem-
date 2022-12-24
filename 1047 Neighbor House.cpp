#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define el "\n"
#define Pb push_back
#define Mp make_pair
#define M 25
using namespace std;
int n,value,t,n1,n2,n3,ans,cas=1;
int A[M][3];

vector<int>vec;
map<int,int>mp;

int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>A[i][0]>>A[i][1]>>A[i][2];

        for(int i=1;i<n;i++){
            n1 = min(A[i-1][1],A[i-1][2]);
            A[i][0] +=n1;
            n2 = min(A[i-1][0],A[i-1][2]);
            A[i][1]+=n2;
            n3 = min(A[i-1][0],A[i-1][1]);
            A[i][2]+=n3;
        }
//        cout<<"Current Grid: "<<endl;
//
//        for(int i=0;i<n;i++){
//            cout<<A[i][0]<<" "<<A[i][1]<<" "<<A[i][2]<<endl;
//        }
//        cout<<endl;


        ans = min(A[n-1][0],A[n-1][1]);
        ans = min(ans,A[n-1][2]);
        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }
    return 0;
}

