#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,arr[26];
    int t,n,k,cnt,cas=1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ch = 'A';
        for(int i=0;i<n;i++){
            arr[i] = ch;
            ch++;
        }

        cnt = 0;
        cout<<"Case "<<cas++<<":"<<endl;

        do{
            cnt++;
            for(int i=0;i<n;i++)
                cout<<arr[i];
            cout<<endl;
            if(cnt==k)
                break;
        }while(next_permutation(arr,arr+n));

    }
    return 0;
}

