#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,arr[44],cnt,cas=1;
    cin>>t;
    while(t--){
        cin>>n>>p>>q;
        for(int i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);
        cnt = 0;

        for(int i=0;i<n;i++){

             if( arr[i]<=q && p>0){
                    //cout<<"arr: "<<arr[i]<<endl;
                cnt++;
                q -= arr[i];
                p--;
             }
             else
                break;
        }
        cout<<"Case "<<cas++<<": "<<cnt<<endl;
    }
    return 0;
}

