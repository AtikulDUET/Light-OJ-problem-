#include<bits/stdc++.h>
#define Size 10000007
using namespace std;
bool flag[Size];
void sieve(){
    for(int i=3;i*i<=Size;i++){
        if(flag[i]==false){
            for(int j=i*i;j<=Size;j+=i)
                flag[j] = true;
        }
    }
}
int main()
{
    sieve();
    int t,n,n1,n2,cnt,cas=1;
    cin>>t;
    while(t--){
        cin>>n;
        cnt = 0;
        if(n>2){
            n1 = n - 2;
            if( (flag[n1]==false && (n1&1))||n1==2){
                cnt++;
            }
        }
        for(int i=3;i<=n/2;i+=2){
            if(flag[i]==false){
                n1 = n - i;
                if(flag[n1]==false){
                    cnt++;
                }
            }
        }
        cout<<"Case "<<cas++<<": "<<cnt<<endl;
    }
    return 0;
}

