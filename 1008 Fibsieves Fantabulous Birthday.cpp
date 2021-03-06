#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,c,n,temp,sq,look;
    int t,cas=1;
    cin>>t;
    while(t--){
        cin>>n;
        sq = ceil(sqrt(n));

        look = (sq*sq)-(sq-1);

        if(look==n)
            cout<<"Case "<<cas++<<": "<<sq<<" "<<sq<<endl;
        else if(sq&1){
            if(n<look){
                r = sq - (look-n);
                c = sq;
                cout<<"Case "<<cas++<<": "<<c<<" "<<r<<endl;
            }
            else{
                r = sq;
                c = sq - (n-look);
                cout<<"Case "<<cas++<<": "<<c<<" "<<r<<endl;
            }
        }
        else{
            if(n<look){
                r = sq;
                c = sq - abs(n-look);
                cout<<"Case "<<cas++<<": "<<c<<" "<<r<<endl;
            }
            else{
                 r = sq - abs(look-n);
                c = sq;
                cout<<"Case "<<cas++<<": "<<c<<" "<<r<<endl;
            }
        }
    }
    return 0;
}

