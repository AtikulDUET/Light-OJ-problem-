#include<bits/stdc++.h>
using namespace std;
int binDec(int n){
    int mult = 1, res = 0;
    while(n>0){
        res += n%2*mult;
        mult *= 10;
        n/=2;
    }
    return res;
}
int main()
{
    int da,db,dc,dd,ba,bb,bc,bd,cas = 1,t;
    cin>>t;
    while(t--){
        scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
        scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);
    if(binDec(da)==ba && binDec(db)==bb && binDec(dc)==bc && binDec(dd)==bd){
        cout<<"Case "<<cas++<<": Yes"<<endl;
    }
    else
        cout<<"Case "<<cas++<<": No"<<endl;
    }
    return 0;
}
