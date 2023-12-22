#include<bits/stdc++.h>
#define M 5000001
#define ll unsigned long long int
using namespace std;

int Phi[M+2];
ll cul[M+2];
void Phi_Cal(){
    for(int i=1;i<=M;i++)
        Phi[i] = i;


    for(int i=2;i<=M;i++){
        if(Phi[i]==i){
            for(int j=i;j<=M;j+=i){
                Phi[j] -= (Phi[j]/i);
            }
        }
    }
}


int main()
{
    Phi_Cal();
    int t,cas=1,a,b;
    ll ans,temp;
    //freopen("1aaa.txt","w",stdout);
    cin>>t;
    cul[1] = 1;
    for(int i=2;i<=M;i++){
        temp = Phi[i];
        temp = temp*temp;
        cul[i] = cul[i-1] + temp;
    }
//    for(int i=1;i<=10;i++)
//        cout<<Phi[i]<<'\t';
//    cout<<endl<<endl;
//
//    for(int i=1;i<=10;i++)
//        cout<<cul[i]<<'\t';
//    cout<<endl;



    while(t--){
        cin>>a>>b;
        cout<<"Case "<<cas++<<": "<<cul[b]-cul[a-1]<<endl;
    }


    return 0;
}

