#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define M 1000006
using namespace std;
ll n,p,q,r,temp,rem,n1,n2,value,t,cas=1,two,five;
int cnt2[M],cnt5[M],pre2[M],pre5[M];

void Calculate(){
    for(int i=2;i<M;i*=2){
        for(int j=i;j<M;j+=i)
            cnt2[j] +=1;
    }
     for(int i=5;i<M;i*=5){
        for(int j=i;j<M;j+=i)
            cnt5[j]+=1;
    }

    for(int i=1;i<M;i++){
        pre2[i] = cnt2[i] + pre2[i-1];
    }
    for(int i=1;i<M;i++){
        pre5[i] = cnt5[i] +  pre5[i-1];
    }
}


int main()
{
    Calculate();
    cin>>t;
    while(t--){
        cin>>n>>r>>p>>q;
        two =0 , five = 0;
        two = pre2[n] + cnt2[p]*q;

        five = pre5[n] + cnt5[p]*q;

        n1 = pre2[r] + pre2[n-r];
        n2 = pre5[r] + pre5[n-r];
       /// cout<<"two: "<<two<<" five: "<<five<<" n1: "<<n1<<" n2: "<<n2<<endl;
        two -= n1;
        five -= n2;
        if(two<five)
            temp = two;
        else
            temp = five;
        cout<<"Case "<<cas++<<": "<<temp<<endl;
    }
    return 0;
}

