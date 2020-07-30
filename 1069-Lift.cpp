#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,loc,left,total=0,cas=1,floor;
    cin>>t;
    while(t--){
        cin>>loc>>left;
        if(left>loc)
        total = left*4 + 10 + 9;
        else{
            floor = loc - left;
            total = loc*4 + floor*4 + 10 + 9;
        }
        cout<<"Case "<<cas++<<": "<<total<<endl;
    }
    return 0;
}

