#include<bits/stdc++.h>
#define Size 100005
using namespace std;
int tree[Size*3];
int arr[Size];
void init(int node,int b,int e){
    if(b==e){
        tree[node] = arr[b];
        return;
    }
    int mid = (b+e)/2;
    int left = node*2;
    int right = node*2 + 1;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = min(tree[left] , tree[right]);

}

int Query(int node,int b,int e,int i,int j){
    if(b>=i && e<=j)
        return tree[node];

   if(j<b || e<i)
        return INT_MAX;


    int mid = (b+e)/2;
    int left = node*2;
    int right = node*2 + 1;
    int p1 = Query(left,b,mid,i,j);
    int p2 = Query(right,mid+1,e,i,j);
    return min(p1,p2);

}

int main()
{
    int n,q,st,ed,temp,t,cas=1;
    cin>>t;
    while(t--){
    cin>>n>>q;
    memset(tree,0,sizeof(tree));
    for(int i=0;i<n;i++)
        cin>>arr[i];

    init(1,0,n-1);

    cout<<"Case "<<cas++<<":"<<endl;
    for(int i=0;i<q;i++){
        cin>>st>>ed;
        temp = Query(1,0,n-1,st-1,ed-1);
        cout<<temp<<endl;
    }

    }
    return 0;
}

