#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,cas=1;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a*a+b*b==c*c || b*b+c*c == a*a || c*c+a*a == b*b)
            cout<<"Case "<<cas++<<": yes"<<endl;
        else
            cout<<"Case "<<cas++<<": no"<<endl;
    }
    return 0;
}

