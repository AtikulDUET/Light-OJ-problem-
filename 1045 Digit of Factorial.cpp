#include<bits/stdc++.h>
#define Size 1000000
using namespace std;
double logg[Size+5];
int main()
{
    int t,cas = 1,n,b,temp;
    double res;
    for(int i=1;i<=Size;i++){
        logg[i] = logg[i-1] + log10(i);
    }
    cin>>t;
    while(t--){
        cin>>n>>b;
        res = logg[n]/log10(b);
        temp = floor(res);
        cout<<"Case "<<cas++<<": "<<temp+1<<endl;
    }
    return 0;
}

