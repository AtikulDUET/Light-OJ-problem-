#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[100],cas=1,index_min,cnt;
    cin>>t;
    while(t--){
        cin>>n;
        cnt = 0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n-1;i++){
            index_min = i;
            for(int j=i+1;j<n;j++){
                if(arr[index_min]>arr[j])
                    index_min = j;
            }
        if(index_min!=i){
            cnt++;
            int temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }

    cout<<"Case "<<cas++<<": "<<cnt<<endl;
    cnt=0;
    }
    return 0;
}

