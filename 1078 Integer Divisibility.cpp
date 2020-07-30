#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,rem=0,cnt=0,t,cas=1;
    cin>>t;
    while(t--){
    cin>>a>>b;
    for(int i=0;;i++){
            cnt++;
        rem = ((rem*10)+b)%a;
        if(rem==0) break;
    }
    cout<<"Case "<<cas++<<": "<<cnt<<endl;
    cnt=0;
    }
    return 0;
}
